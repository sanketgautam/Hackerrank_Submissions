/*-----------------------------------------------------------------------

Problem Title: Swap Nodes [Algo]
Problem Link: https://www.hackerrank.com/challenges/swap-nodes-algo
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the swapNodes function below.
 */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node* root, vector<int>& v)
{

    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

void swap(Node* root, int level, int k)
{
    Node* node;

    if (!root)
        return;

    if (level == k) {
        node = root->left;
        root->left = root->right;
        root->right = node;
    }
    else {
        swap(root->left, level + 1, k);
        swap(root->right, level + 1, k);
    }
}

int height(Node* root)
{
    if (!root)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

vector<vector<int> > swapNodes(vector<vector<int> > indexes, vector<int> queries)
{

    int a, b, k, h, in, l;
    queue<Node*> q;
    Node *root, *node;
    vector<vector<int> > inorders;
    vector<int> inord;
    vector<vector<int> >::iterator i;
    vector<int>::iterator qr;

    root = new Node(1);

    q.push(root);

    for (i = indexes.begin(); i != indexes.end(); i++) {
        node = q.front();
        q.pop();

        a = (*i)[0];
        b = (*i)[1];

        if (a != -1) {
            node->left = new Node(a);
            q.push(node->left);
        }
        if (b != -1) {
            node->right = new Node(b);
            q.push(node->right);
        }
    }

    h = height(root);

    for (qr = queries.begin(); qr != queries.end(); qr++) {
        inord.clear();
        k = *qr;
        in = 2;
        l = k;
        while (l <= h) {
            swap(root, 1, l);
            l = k * in;
            in++;
        }
        inorder(root, inord);
        inorders.push_back(inord);
    }

    return inorders;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int> > indexes(n);
    for (int indexes_row_itr = 0; indexes_row_itr < n; indexes_row_itr++) {
        indexes[indexes_row_itr].resize(2);

        for (int indexes_column_itr = 0; indexes_column_itr < 2; indexes_column_itr++) {
            cin >> indexes[indexes_row_itr][indexes_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int queries_itr = 0; queries_itr < queries_count; queries_itr++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[queries_itr] = queries_item;
    }

    vector<vector<int> > result = swapNodes(indexes, queries);

    for (int result_row_itr = 0; result_row_itr < result.size(); result_row_itr++) {
        for (int result_column_itr = 0; result_column_itr < result[result_row_itr].size(); result_column_itr++) {
            fout << result[result_row_itr][result_column_itr];

            if (result_column_itr != result[result_row_itr].size() - 1) {
                fout << " ";
            }
        }

        if (result_row_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
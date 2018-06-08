/*-----------------------------------------------------------------------

Problem Title: Tree: Level Order Traversal
Problem Link: https://www.hackerrank.com/challenges/tree-level-order-traversal
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node* root)
{
    queue<node*> q;
    node* cur;

    cur = root;

    q.push(root);

    while (!q.empty()) {

        cur = q.front();

        cout << cur->data << " ";

        if (cur->left)
            q.push(cur->left);

        if (cur->right)
            q.push(cur->right);

        q.pop();
    }
}
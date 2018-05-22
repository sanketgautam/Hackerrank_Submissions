/*-----------------------------------------------------------------------

Problem Title: Day 23: BST Level-Order Traversal
Problem Link: https://www.hackerrank.com/challenges/30-binary-trees
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


void levelOrder(Node* root)
{

    queue<Node*> q;
    Node* node = root;
    q.push(node);
    while (!q.empty()) {
        node = q.front();

        cout << node->data << " ";

        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);

        q.pop();
    }
}
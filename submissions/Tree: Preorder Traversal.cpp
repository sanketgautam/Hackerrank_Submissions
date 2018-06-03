/*-----------------------------------------------------------------------

Problem Title: Tree: Preorder Traversal
Problem Link: https://www.hackerrank.com/challenges/tree-preorder-traversal
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node* root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
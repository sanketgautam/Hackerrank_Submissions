/*-----------------------------------------------------------------------

Problem Title: Tree: Postorder Traversal
Problem Link: https://www.hackerrank.com/challenges/tree-postorder-traversal
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

void postOrder(node* root)
{
    if (!root)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
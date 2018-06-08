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
    node *cur, *prev;

    if (!root)
        return;

    cur = root;

    while (cur) {
        if (!cur->left) {
            cout << cur->data << " ";
            cur = cur->right;
        }
        else {
            prev = cur->left;

            while (prev->right != NULL && prev->right != cur) {
                prev = prev->right;
            }

            if (!prev->right) {
                prev->right = cur;
                cout << cur->data << " ";
                cur = cur->left;
            }
            else {
                prev->right = NULL;
                cur = cur->right;
            }
        }
    }
}
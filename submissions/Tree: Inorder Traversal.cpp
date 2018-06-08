/*-----------------------------------------------------------------------

Problem Title: Tree: Inorder Traversal
Problem Link: https://www.hackerrank.com/challenges/tree-inorder-traversal
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

void inOrder(node* root)
{
    node *prev, *cur;

    if (!root)
        return;

    cur = root;

    while (cur != NULL) {
        if (cur->left == NULL) {
            cout << cur->data << " ";
            cur = cur->right;
        }
        else {
            prev = cur->left;

            while (prev->right != NULL && prev->right != cur) {
                prev = prev->right;
            }

            if (prev->right == NULL) {
                prev->right = cur;
                cur = cur->left;
            }
            else {
                prev->right = NULL;
                cout << cur->data << " ";
                cur = cur->right;
            }
        }
    }
}
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

    node *cur, *prev, *first, *middle, *last, *dummy;

    if (!root)
        return;

    dummy = new node();
    dummy->left = root;
    dummy->right = NULL;

    cur = dummy;

    while (cur) {
        if (!cur->left) {
            cur = cur->right;
        }
        else {
            prev = cur->left;

            while (prev->right != NULL && prev->right != cur) {
                prev = prev->right;
            }

            if (!prev->right) {
                prev->right = cur;
                cur = cur->left;
            }
            else {
                //reverse the right references in chain from cur to prev
                first = cur;
                middle = cur->left;
                while (middle != cur) {
                    last = middle->right;
                    middle->right = first;
                    first = middle;
                    middle = last;
                }

                //again reverse the right references from prev to cur & print cur->data
                first = cur;
                middle = prev;
                while (middle != cur) {
                    cout << middle->data << " ";
                    last = middle->right;
                    middle->right = first;
                    first = middle;
                    middle = last;
                }

                prev->right = NULL;
                cur = cur->right;
            }
        }
    }
}
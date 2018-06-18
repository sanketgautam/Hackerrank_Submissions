/*-----------------------------------------------------------------------

Problem Title: Is This a Binary Search Tree?
Problem Link: https://www.hackerrank.com/challenges/is-binary-search-tree
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
    
        int data;
    
    
        Node* left;
    
    
        Node* right;
    
    
    }
    
*/

bool checkBST(Node* root, Node* l = NULL, Node* r = NULL)
{
    if (!root)
        return true;

    if (l && root->data <= l->data)

        if (r && root->data >= r->data)
            return false;

    return (checkBST(root->left, l, root) && checkBST(root->right, root, r));
}
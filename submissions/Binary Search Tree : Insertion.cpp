/*-----------------------------------------------------------------------

Problem Title: Binary Search Tree : Insertion
Problem Link: https://www.hackerrank.com/challenges/binary-search-tree-insertion
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/*
Node is defined as 

typedef struct node
{
    int data;
    
    node * left;
    
    node * right;
    
}node;

*/

node* insert(node* root, int value)
{

    node *n, *temp;
    n = new node();

    n->left = NULL;
    n->right = NULL;
    n->data = value;

    if (!root)
        return n;

    temp = root;

    while (temp) {
        if (temp->data > value) {
            if (!temp->left) {
                temp->left = n;
                break;
            }
            temp = temp->left;
        }
        else {
            if (!temp->right) {
                temp->right = n;
                break;
            }
            temp = temp->right;
        }
    }

    return root;
}
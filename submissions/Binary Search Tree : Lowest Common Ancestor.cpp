/*-----------------------------------------------------------------------

Problem Title: Binary Search Tree : Lowest Common Ancestor
Problem Link: https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/*
Node is defined as 

typedef struct node
{
    int data;
    
    node *left;
    
    node *right;
    
}node;

*/

node* lca(node* root, int v1, int v2)
{
    node* temp = root;
    int i, l;

    vector<node*> p1;
    vector<node*> p2;

    //storing path for v1
    while (temp->data != v1) {

        p1.push_back(temp);
        if (v1 < temp->data) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }

    p1.push_back(temp);
    temp = root;

    //storing path for v2
    while (temp->data != v2) {
        p2.push_back(temp);
        if (v2 < temp->data) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }

    p2.push_back(temp);
    temp = root;

    l = (p1.size() < p2.size()) ? p1.size() : p2.size();

    for (i = 0; i < l; i++) {
        if (p1[i]->data != p2[i]->data)
            break;
        temp = p1[i];
    }

    return temp;
}
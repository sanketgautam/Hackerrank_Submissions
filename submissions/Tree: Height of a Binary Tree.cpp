/*-----------------------------------------------------------------------

Problem Title: Tree: Height of a Binary Tree
Problem Link: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node* root)
{
    if (!root)
        return -1;

    return max(height(root->left), height(root->right)) + 1;
}
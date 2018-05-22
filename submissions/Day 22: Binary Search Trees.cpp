/*-----------------------------------------------------------------------

Problem Title: Day 22: Binary Search Trees
Problem Link: https://www.hackerrank.com/challenges/30-binary-search-trees
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


int getHeight(Node* root)
{

    if (root == NULL)
        return -1;

    return max(getHeight(root->left), getHeight(root->right)) + 1;
}
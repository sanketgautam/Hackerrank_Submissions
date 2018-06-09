/*-----------------------------------------------------------------------

Problem Title: Tree: Huffman Decoding 
Problem Link: https://www.hackerrank.com/challenges/tree-huffman-decoding
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

void decode_huff(node* root, string s)
{
    int i, l = s.length();
    node* temp;

    while (i < l) {
        temp = root;
        while (temp->left || temp->right) {
            if (s[i] == '0') {
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
            i++;
        }
        cout << temp->data;
    }
}
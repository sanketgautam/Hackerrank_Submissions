/*-----------------------------------------------------------------------

Problem Title: Tree : Top View
Problem Link: https://www.hackerrank.com/challenges/tree-top-view
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

/*-- This should be the correct way to solve this problem -- 
void topView(node *root) {
    
    node *cur, *temp;
    map<int, node*> hr;
    queue<pair<node*, int>> q;
    int val;
    pair<node*, int> p;
    
    if(!root)
        return;
    
    q.push(make_pair(root, 0));
    
    while(!q.empty()){
        
        p = q.front();
        temp = p.first;
        val = p.second;
        q.pop();
        
        if(hr.find(val) == hr.end()){
            cout<<temp->data<<" ";
            hr[val] = temp;
        }
        
        if(temp->left)
            q.push(make_pair(temp->left, val-1));
        
        if(temp->right)
            q.push(make_pair(temp->right, val+1));
        
    }
}
*/

//This is the accepted solution for the problem (on HackerRank)
//Note: This solution will not work if the tree has long branches from the left extending to the right or vice versa.
void topView(node* root)
{
    stack<node*> s;
    node* cur;

    cur = root;

    while (cur) {
        s.push(cur);
        cur = cur->left;
    }

    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }

    cur = root->right;

    while (cur) {
        cout << cur->data << " ";
        cur = cur->right;
    }
}
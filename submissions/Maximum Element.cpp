/*-----------------------------------------------------------------------

Problem Title: Maximum Element
Problem Link: https://www.hackerrank.com/challenges/maximum-element
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <limits>
using namespace std;


int main() {
    int q, t, n, m=numeric_limits<int>::min();
    stack<int> s;
    
    cin>>q;
    
    while(q--){
        cin>>t;
        if(t==1){
            cin>>n;
            m = max(m, n);
            s.push(m);
        }else if(t==2){
            s.pop();
            if(s.empty())
                m = numeric_limits<int>::min();
            else
                m = s.top();
        }else if(t==3){
            cout<<m<<"\n";
        }
    }
    
    return 0;
}

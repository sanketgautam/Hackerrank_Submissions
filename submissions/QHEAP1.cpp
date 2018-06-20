/*-----------------------------------------------------------------------

Problem Title: QHEAP1
Problem Link: https://www.hackerrank.com/challenges/qheap1
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int i, Q, t, n;
    set<int> s;
    cin >> Q;
    while (Q--) {
        cin >> t;

        cout << *s.begin() << "\n";
    }
    else
    {
        cin >> n;
        if (t == 1)
            s.insert(n);
        else
            s.erase(s.find(n));
    }
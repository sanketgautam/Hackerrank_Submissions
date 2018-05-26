/*-----------------------------------------------------------------------

Problem Title: Lower Bound-STL
Problem Link: https://www.hackerrank.com/challenges/cpp-lower-bound
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, n, x, q, y;
    vector<int> v;
    vector<int>::iterator ii;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cin >> q;

    for (i = 0; i < q; i++) {
        cin >> y;
        ii = lower_bound(v.begin(), v.end(), y);
        if (*ii == y)
            cout << "Yes " << (ii - v.begin()) + 1;
        else
            cout << "No " << (ii - v.begin()) + 1;
        cout << "\n";
    }

    return 0;
}
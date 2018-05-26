/*-----------------------------------------------------------------------

Problem Title: Vector-Erase
Problem Link: https://www.hackerrank.com/challenges/vector-erase
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
    int i, n, num, x, a, b;
    vector<int> v;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    cin >> x;
    cin >> a >> b;

    if (x > 0)
        x--;
    if (a > 0)
        a--;
    if (b > 0)
        b--;

    v.erase(v.begin() + x);
    v.erase(v.begin() + a, v.begin() + b);

    cout << v.size() << "\n";
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
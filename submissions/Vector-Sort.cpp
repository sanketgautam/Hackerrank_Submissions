/*-----------------------------------------------------------------------

Problem Title: Vector-Sort
Problem Link: https://www.hackerrank.com/challenges/vector-sort
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
    int i, n, num;
    vector<int> v;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
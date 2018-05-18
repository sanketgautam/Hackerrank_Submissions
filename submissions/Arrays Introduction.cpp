/*-----------------------------------------------------------------------

Problem Title: Arrays Introduction
Problem Link: https://www.hackerrank.com/challenges/arrays-introduction
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

    int n, i, a[1000];

    //input
    cin >> n;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    //output
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}
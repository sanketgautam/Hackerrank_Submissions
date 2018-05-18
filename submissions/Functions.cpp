/*-----------------------------------------------------------------------

Problem Title: Functions
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-functions
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    return ((a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d));
}

int main()
{
    int a, b, c, d;
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {
        return 1;
    }
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
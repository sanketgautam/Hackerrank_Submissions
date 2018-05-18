/*-----------------------------------------------------------------------

Problem Title: Day 5: Loops
Problem Link: https://www.hackerrank.com/challenges/30-loops
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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    cin >> n;

    for (i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
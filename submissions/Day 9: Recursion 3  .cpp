/*-----------------------------------------------------------------------

Problem Title: Day 9: Recursion 3  
Problem Link: https://www.hackerrank.com/challenges/30-recursion
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    if (n <= 1) { //for 0! and 1!
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    cin >> num;
    cout << factorial(num);
    return 0;
}
/*-----------------------------------------------------------------------

Problem Title: Day 25: Running Time and Complexity
Problem Link: https://www.hackerrank.com/challenges/30-running-time-and-complexity
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    int i, s;

    if (n == 1)
        return false;

    s = sqrt(n);
    for (i = 2; i <= s; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int T, n, s;
    cin >> T;

    while (T--) {
        cin >> n;
        if (isPrime(n))
            cout << "Prime\n";
        else
            cout << "Not prime\n";
    }
    return 0;
}
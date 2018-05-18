/*-----------------------------------------------------------------------

Problem Title: Day 10: Binary Numbers
Problem Link: https://www.hackerrank.com/challenges/30-binary-numbers
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int n, count = 0, max = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    while (n != 0) {
        s.push(n % 2);
        n = n / 2;
    }

    while (!s.empty()) {
        if (s.top() == 1) {
            count++;
        }
        else {
            if (count >= max) {
                max = count;
            }
            //setting count=0 whenever 0 encountered
            count = 0;
        }
        s.pop();
    }
    //handling case when 0 does not occurs in binary representation of a number
    if (max < count) {
        max = count;
    }

    printf("%d", max);
    return 0;
}
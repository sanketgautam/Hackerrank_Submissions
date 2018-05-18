/*-----------------------------------------------------------------------

Problem Title: Day 6: Let's Review
Problem Link: https://www.hackerrank.com/challenges/30-review-loop
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
    int T, i;
    string s, t1, t2;

    cin >> T;

    while (T--) {
        s = "";
        t1 = "";
        t2 = "";

        cin >> s;
        for (i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                t1 += s[i];
            }
            else {
                t2 += s[i];
            }
        }

        cout << t1 << " " << t2 << endl;
    }

    return 0;
}
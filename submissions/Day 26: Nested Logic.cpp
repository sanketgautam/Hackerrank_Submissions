/*-----------------------------------------------------------------------

Problem Title: Day 26: Nested Logic
Problem Link: https://www.hackerrank.com/challenges/30-nested-logic
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int fine = 0, ed, em, ey, rd, rm, ry;

    cin >> rd >> rm >> ry;
    cin >> ed >> em >> ey;

    if (ry == ey) {
        if (rm == em) {
            if (rd >= ed)
                fine = 15 * (rd - ed);
        }
        else if (rm > em) {
            fine = 500 * (rm - em);
        }
    }
    else if (ry > ey) {
        fine = 10000;
    }

    cout << fine;

    return 0;
}
/*-----------------------------------------------------------------------

Problem Title: Conditional Statements
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
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
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    };

    /* using swtich case intentionally */
    switch (n) {
    case (1):
        printf("one");
        break;
    case (2):
        printf("two");
        break;
    case (3):
        printf("three");
        break;
    case (4):
        printf("four");
        break;
    case (5):
        printf("five");
        break;
    case (6):
        printf("six");
        break;
    case (7):
        printf("seven");
        break;
    case (8):
        printf("eight");
        break;
    case (9):
        printf("nine");
        break;
    default:
        printf("Greater than 9");
    }

    return 0;
}
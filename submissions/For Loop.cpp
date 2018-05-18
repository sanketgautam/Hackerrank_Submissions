/*-----------------------------------------------------------------------

Problem Title: For Loop
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int a, b, i;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    };

    for (i = a; i <= b; i++) {

        switch (i) {
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
            if (i % 2 == 0)
                printf("even");
            else
                printf("odd");
        }
        printf("\n");
    }

    return 0;
}
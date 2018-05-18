/*-----------------------------------------------------------------------

Problem Title: Basic Data Types
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%i \n%li \n%c \n%0.3f \n%0.9lf", i, l, c, f, d);

    return 0;
}
/*-----------------------------------------------------------------------

Problem Title: Pointer
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-pointer
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <stdio.h>
#include <math.h>
void update(int* a, int* b)
{
    // trying not to use third variable
    *a = *a + *b;
    *b = abs((*a - *b) - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
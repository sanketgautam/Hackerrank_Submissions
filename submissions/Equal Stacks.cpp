/*-----------------------------------------------------------------------

Problem Title: Equal Stacks
Problem Link: https://www.hackerrank.com/challenges/equal-stacks
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3)
{
    int i, j, k, m, sh1 = 0, sh2 = 0, sh3 = 0;

    for (i = 0; i < h1.size(); i++) {
        sh1 += h1[i];
    }
    for (i = 0; i < h2.size(); i++) {
    }
    for (i = 0; i < h3.size(); i++) {
        sh3 += h3[i];
    }

    i = j = k = 0;

    while (!((sh1 == sh2) && (sh2 == sh3))) {
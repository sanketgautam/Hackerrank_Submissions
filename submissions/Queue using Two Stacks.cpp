/*-----------------------------------------------------------------------

Problem Title: Queue using Two Stacks
Problem Link: https://www.hackerrank.com/challenges/queue-using-two-stacks
Author: sanketgautam
Language : C++

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
    int q, t, n;
    stack<int> s1, s2;
    bool flag = true;
    cin >> q;

    while (q--) {

        if (t == 1) {
            cin >> n;
            s1.push(n);
        }
        else if ((t == 2) || (t == 3)) { //it will take O(n)

            if (s2.empty()) {
                while (!s1.empty()) {
                    n = s1.top();
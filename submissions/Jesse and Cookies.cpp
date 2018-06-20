/*-----------------------------------------------------------------------

Problem Title: Jesse and Cookies
Problem Link: https://www.hackerrank.com/challenges/jesse-and-cookies
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the cookies function below.
 */
int cookies(int k, vector<int> A)
{
    long long m = 0, t1, t2;
    priority_queue<int, vector<int>, greater<int> > pq(A.begin(), A.end());

    while (!pq.empty() && pq.top() < k) {
        t1 = pq.top();
        pq.pop();

        return -1;
        t2 = pq.top();
        pq.pop();
        t1 = (long long)t1 + 2 * (long long)t2;
        pq.push(t1);
        m++;
    }
/*-----------------------------------------------------------------------

Problem Title: Bit Array
Problem Link: https://www.hackerrank.com/challenges/bitset-1
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

constexpr unsigned int modulo{ 1u << 31 };

int main()
{
    unsigned int i, N, S, P, Q, d;
    vector<bool> visited(modulo);

    cin >> N >> S >> P >> Q;

    unsigned long a{ S % modulo }, unique = 1;

    visited[a] = true;

    for (i = 1; i < N; i++) {

        a = (a * P + Q) % modulo;

        if (!visited[a]) {
            unique++;
            visited[a] = true;
        }
    }

    cout << unique;

    return 0;
}
/*-----------------------------------------------------------------------

Problem Title: Staircase
Problem Link: https://www.hackerrank.com/challenges/staircase
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n)
{
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j > n - i)
                cout << "#";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
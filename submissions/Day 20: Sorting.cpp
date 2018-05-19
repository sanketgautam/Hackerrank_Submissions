/*-----------------------------------------------------------------------

Problem Title: Day 20: Sorting
Problem Link: https://www.hackerrank.com/challenges/30-sorting
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, swaps = 0;
    cin >> n;
    vector<int> a(n);

    for (int a_i = 0; a_i < n; a_i++) {
        cin >> a[a_i];
    }

    for (i = 0; i < n; i++) {
        int numSwaps = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numSwaps++;
            }
        }

        if (numSwaps == 0) {
            break;
        }
        else {
            swaps += numSwaps;
        }
    }
    cout << "Array is sorted in " << swaps << " swaps.";
    cout << "\nFirst Element: " << a[0];
    cout << "\nLast Element: " << a[n - 1];
    return 0;
}
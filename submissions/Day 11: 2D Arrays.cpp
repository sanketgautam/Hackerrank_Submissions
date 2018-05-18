/*-----------------------------------------------------------------------

Problem Title: Day 11: 2D Arrays
Problem Link: https://www.hackerrank.com/challenges/30-2d-arrays
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <iostream>
#include <sstream>
#include <limits>
using namespace std;

int hourGlassSum(int a[][6], int i, int j, int m, int n)
{
    if (i - 1 < 0 || j - 1 < 0 || i + 1 > m - 1 || j + 1 > n - 1)
        return numeric_limits<int>::min();
    else {
        return (a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1]);
    }
}
int main(void)
{
    int a[6][6], n, i, j, num, r, c, sum, maxs = numeric_limits<int>::min(), maxi = 0, maxj = 0;
    string s;
    stringstream ss;

    i = 0;
    while (getline(cin >> ws, s)) {
        ss.clear();
        ss.str(s);

        j = 0;
        while (ss >> num) {
            a[i][j] = num;
            j++;
        }
        i++;
    }

    for (r = 0; r < i; r++) {
        for (c = 0; c < j; c++) {
            sum = hourGlassSum(a, r, c, i, j);
            if (sum > maxs) {
                maxs = sum;
                maxi = r;
                maxj = c;
            }
        }
    }

    cout << maxs;
    return 0;
}
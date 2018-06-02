/*-----------------------------------------------------------------------

Problem Title: 2D Array - DS
Problem Link: https://www.hackerrank.com/challenges/2d-array
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int> > arr)
{
    int i, j, n, m, sum, max = numeric_limits<int>::min();

    n = arr.size();
    m = arr[0].size();

    for (i = 1; i < n - 1; i++) {
        for (j = 1; j < m - 1; j++) {
            sum = arr[i][j];
            sum += arr[i - 1][j];
            sum += arr[i + 1][j];
            sum += arr[i + 1][j + 1];
            sum += arr[i + 1][j - 1];
            sum += arr[i - 1][j + 1];
            sum += arr[i - 1][j - 1];

            if (sum > max) {
                max = sum;
            }
        }
    }

    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
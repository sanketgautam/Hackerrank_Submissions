/*-----------------------------------------------------------------------

Problem Title: Day 7: Arrays
Problem Link: https://www.hackerrank.com/challenges/30-arrays
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n, arr_i;
    cin >> n;
    vector<int> arr(n);
    //getting elements for arrays
    for (arr_i = 0; arr_i < n; arr_i++) {
        cin >> arr[arr_i];
    }
    //printing the array in reverse order
    for (arr_i = n - 1; arr_i >= 0; arr_i--) {
        cout << arr[arr_i] << " ";
    }
    return 0;
}
/*-----------------------------------------------------------------------

Problem Title: Day 16: Exceptions - String to Integer
Problem Link: https://www.hackerrank.com/challenges/30-exceptions-string-to-integer
Author: sanketgautam
Language : C++

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
    string S;
    int n;
    cin >> S;
    try {
        n = stoi(S);
        cout << n;
    }
    catch (...) {
        cout << "Bad String";
    }
    return 0;
}
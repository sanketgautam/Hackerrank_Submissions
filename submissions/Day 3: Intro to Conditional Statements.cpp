/*-----------------------------------------------------------------------

Problem Title: Day 3: Intro to Conditional Statements
Problem Link: https://www.hackerrank.com/challenges/30-conditional-statements
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
using namespace std;

int main()
{
    int N;
    bool odd = true, weird;
    cin >> N;

    if (N % 2 == 0)
        odd = false;

    if (odd) {
        cout << "Weird";
    }
    else if (!odd && N >= 2 && N <= 5) {
        cout << "Not Weird";
    }
    else if (!odd && N >= 6 && N <= 20) {
        cout << "Weird";
    }
    else if (!odd && N > 20) {
        cout << "Not Weird";
    }

    return 0;
}
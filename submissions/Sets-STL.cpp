/*-----------------------------------------------------------------------

Problem Title: Sets-STL
Problem Link: https://www.hackerrank.com/challenges/cpp-sets
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

const short int INSERT = 1;
const short int ERASE = 2;
const short int FIND = 3;

int main()
{
    int i, q, x, y, n;
    set<int> s;
    set<int>::iterator e;
    cin >> q;

    for (i = 0; i < q; i++) {
        cin >> y >> x;
        if (y == INSERT) {
            s.insert(x);
        }
        else if (y == ERASE) {
            s.erase(x);
        }
        else {
            e = s.find(x);
            if (e != s.end()) {
                cout << "Yes";
            }
            else {
                cout << "No";
            }
            cout << "\n";
        }
    }

    return 0;
}
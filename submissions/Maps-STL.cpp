/*-----------------------------------------------------------------------

Problem Title: Maps-STL
Problem Link: https://www.hackerrank.com/challenges/cpp-maps
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

const short int ADD = 1;
const short int ERASE = 2;
const short int PRINT = 3;

int main()
{
    int i, q, type, y;
    string x;
    map<string, int> m;
    map<string, int>::iterator r;

    cin >> q;

    for (i = 0; i < q; i++) {
        cin >> type;
        cin >> x;
        if (type == ADD) {
            cin >> y;
            r = m.find(x);
            if (r != m.end()) {
                r->second += y;
            }
            else {
                m.insert(make_pair(x, y));
            }
        }
        else if (type == ERASE) {
            m.erase(x);
        }
        else {
            r = m.find(x);
            if (r != m.end()) {
                cout << r->second;
            }
            else {
                cout << 0;
            }
            cout << "\n";
        }
    }

    return 0;
}
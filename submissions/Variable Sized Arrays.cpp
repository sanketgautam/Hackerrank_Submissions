/*-----------------------------------------------------------------------

Problem Title: Variable Sized Arrays
Problem Link: https://www.hackerrank.com/challenges/variable-sized-arrays
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

/* Making things bit more complex then they are, intentionally */
/* this demonstrates the I/O when the input size is not known beforehand using stringtream*/
int main()
{
    int n, q, i, num, r, c, size;
    string s;
    stringstream ss;
    cin >> n >> q;
    vector<vector<int> > v(n);
    vector<pair<int, int> > query(q);

    //getting input vectors
    for (i = 0; i < n; i++) {
        cin >> size; //just to skip an integer (atually size of vector i), just for demonstrationg of dyanmic input
        getline(cin >> ws, s);
        ss.clear();
        ss.str(s);
        while (ss >> num) {
            v[i].push_back(num);
        }
    }

    //getting input queries
    for (i = 0; i < q; i++) {
        cin >> r >> c;
        query[i] = pair<int, int>(r, c);
    }

    /*queries output*/
    for (i = 0; i < q; i++) {
        printf("%d\n", v[query[i].first][query[i].second]);
    }

    return 0;
}
/*-----------------------------------------------------------------------

Problem Title: StringStream
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-stringstream
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    int n;
    char c;
    vector<int> v;
    stringstream ss(str);
    while (ss >> n) {
        v.push_back(n);
        ss >> c;
    }
    return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
/*-----------------------------------------------------------------------

Problem Title: Day 8: Dictionaries and Maps
Problem Link: https://www.hackerrank.com/challenges/30-dictionaries-and-maps
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


/* using getline, make sure to remove whitspaces & new lines while reading input*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{

    long n, value;
    string key, query;
    map<string, long> phone_book;
    map<string, long>::iterator query_result;
    cin >> n;
    cin >> ws;
    while (n--) {
        getline(cin >> ws, key, ' ');
        cin >> value;
        if (phone_book.find(key) == phone_book.end())
            phone_book.insert(pair<string, long>(key, value));
    }
    while (getline(cin >> ws, query)) {
        query_result = phone_book.find(query);
        if (query_result == phone_book.end()) {
            cout << "Not found";
        }
        else {
            cout << query << "=" << query_result->second;
        }
        cout << endl;
    }
    return 0;
}
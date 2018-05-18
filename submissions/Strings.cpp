/*-----------------------------------------------------------------------

Problem Title: Strings
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-strings
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string a, b;
    char c;
    cin >> a >> b;

    cout << a.length() << " " << b.length() << "\n";
    cout << a + b << "\n";
    c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout << a << " " << b;

    return 0;
}
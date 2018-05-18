/*-----------------------------------------------------------------------

Problem Title: Day 1: Data Types
Problem Link: https://www.hackerrank.com/challenges/30-data-types
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


// Declare second integer, double, and String variables.

int num;
double dd;
string str;

// Read and save an integer, double, and String to your variables.

cin >> num;
cin >> dd;
getline(cin >> ws, str);

// Print the sum of both integer variables on a new line.
// Print the sum of the double variables on a new line.
// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.

cout << i + num << "\n"
     << fixed << setprecision(1) << d + dd << "\n"
     << s + str;
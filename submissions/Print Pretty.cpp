/*-----------------------------------------------------------------------

Problem Title: Print Pretty
Problem Link: https://www.hackerrank.com/challenges/prettyprint
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


cout << showbase << hex << nouppercase << left << (long long)A << "\n";

cout << dec << setfill('_') << right << setw(15) << showpos << fixed << setprecision(2) << B << "\n";

cout << setprecision(9) << noshowpos << scientific << uppercase << C << "\n";
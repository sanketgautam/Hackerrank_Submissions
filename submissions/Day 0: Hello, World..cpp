/*-----------------------------------------------------------------------

Problem Title: Day 0: Hello, World.
Problem Link: https://www.hackerrank.com/challenges/30-hello-world
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


int main()
{
    string inputString; // declare a variable to hold our input
    getline(cin, inputString); // get a line of input from cin and save it to our variable

    // Your first line of output goes here
    cout << "Hello, World." << endl;

    // Write the second line of output
    cout << inputString;
    return 0;
}
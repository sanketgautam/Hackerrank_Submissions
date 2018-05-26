/*-----------------------------------------------------------------------

Problem Title: Inherited Code
Problem Link: https://www.hackerrank.com/challenges/inherited-code
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class BadLengthException {
    int n;

public:
    BadLengthException(int err)
    {
        n = err;
    }
    int what()
    {
        return n;
    }
};
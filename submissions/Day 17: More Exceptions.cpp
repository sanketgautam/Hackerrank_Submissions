/*-----------------------------------------------------------------------

Problem Title: Day 17: More Exceptions
Problem Link: https://www.hackerrank.com/challenges/30-more-exceptions
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


class Calculator {
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0) {
            throw std::invalid_argument("n and p should be non-negative");
        }
        else {
            return pow(n, p);
        }
    }
};
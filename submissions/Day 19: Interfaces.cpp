/*-----------------------------------------------------------------------

Problem Title: Day 19: Interfaces
Problem Link: https://www.hackerrank.com/challenges/30-interfaces
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n)
    {
        int i, sum = 1;

        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0)
                sum += i;
        }
        if (n != 1)
            sum += n;
        return sum;
    }
};
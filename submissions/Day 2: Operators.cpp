/*-----------------------------------------------------------------------

Problem Title: Day 2: Operators
Problem Link: https://www.hackerrank.com/challenges/30-operators
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{

    double mealCost, tipPercent, taxPercent, totalCost;

    cin >> mealCost >> tipPercent >> taxPercent;

    totalCost = mealCost + (mealCost * tipPercent + mealCost * taxPercent) / 100;

    cout << "The total meal cost is " << round(totalCost) << " dollars.";

    return 0;
}
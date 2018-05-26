/*-----------------------------------------------------------------------

Problem Title: Classes and Objects
Problem Link: https://www.hackerrank.com/challenges/classes-objects
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class Student {

    vector<int> scores;
    int num;

public:
    void input()
    {
        for (int i = 0; i < 5; i++) {
            cin >> num;
            scores.push_back(num);
        }
    }

    int calculateTotalScore()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
};
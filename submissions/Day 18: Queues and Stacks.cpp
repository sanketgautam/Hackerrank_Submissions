/*-----------------------------------------------------------------------

Problem Title: Day 18: Queues and Stacks
Problem Link: https://www.hackerrank.com/challenges/30-queues-stacks
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    stack<char> s;
    queue<char> q;

public:
    void pushCharacter(char ch)
    {
        s.push(ch);
    }

    void enqueueCharacter(char ch)
    {
        q.push(ch);
    }

    char popCharacter()
    {
        char ch = s.top();
        s.pop();
        return ch;
    }

    char dequeueCharacter()
    {
        char ch = q.front();
        q.pop();
        return ch;
    }
};
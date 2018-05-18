/*-----------------------------------------------------------------------

Problem Title: Day 14: Scope
Problem Link: https://www.hackerrank.com/challenges/30-scope
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


// Add your code here

Difference(vector<int> a)
{
    this->elements = a;
}

//compute maximum difference
void computeDifference()
{
    //sorting all the elements
    sort(this->elements.begin(), this->elements.end());

    // finding absolute difference
    this->maximumDifference = abs(this->elements[this->elements.size() - 1] - this->elements[0]);
}
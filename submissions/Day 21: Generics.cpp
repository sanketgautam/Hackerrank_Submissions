/*-----------------------------------------------------------------------

Problem Title: Day 21: Generics
Problem Link: https://www.hackerrank.com/challenges/30-generics
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/
template <typename T>
void printArray(vector<T> v)
{

    typename vector<T>::iterator i;

    for (i = v.begin(); i != v.end(); i++) {
        cout << *i << "\n";
    }

    /* or we can also iterate over the array as
    for(T i:v ){
        cout<<i<<"\n";
    }*/
}
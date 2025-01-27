/*-----------------------------------------------------------------------

Problem Title: C++ Variadics
Problem Link: https://www.hackerrank.com/challenges/cpp-variadics
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


template <bool a>
int reversed_binary_value()
{
    return a;
}

template <bool a, bool b, bool... d>
int reversed_binary_value()
{
    return (reversed_binary_value<b, d...>() << 1) + a;
}
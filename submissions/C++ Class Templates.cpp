/*-----------------------------------------------------------------------

Problem Title: C++ Class Templates
Problem Link: https://www.hackerrank.com/challenges/c-class-templates
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


template <class T>
class AddElements {
    T n;

public:
    AddElements(const T& num)
        : n{ num }
    {
    }

    T add(const T& m)
    {
        return n + m;
    }
};

template <>
class AddElements<string> {
    string s;

public:
    AddElements(const string& st)
        : s{ st }
    {
    }

    string concatenate(const string& m)
    {
        s.reserve(20);
        s.append(m);
        return s;
    }
};
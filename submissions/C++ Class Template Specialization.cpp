/*-----------------------------------------------------------------------

Problem Title: C++ Class Template Specialization
Problem Link: https://www.hackerrank.com/challenges/cpp-class-template-specialization
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


template <>
struct Traits<Color> {

    static string name(int i)
    {
        static string c[3] = { "red", "green", "orange" };
        if (i < 0 || i > 2)
            return "unknown";
        return c[i];
    }
};

template <>
struct Traits<Fruit> {

    static string name(int i)
    {
        static string f[3] = { "apple", "orange", "pear" };
        if (i < 0 || i > 2)
            return "unknown";
        return f[i];
    }
};
/*-----------------------------------------------------------------------

Problem Title: Day 27: Testing
Problem Link: https://www.hackerrank.com/challenges/30-testing
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


class TestDataEmptyArray {
public:
    static vector<int> get_array()
    {
        return {};
    }
};

class TestDataUniqueValues {
public:
    static vector<int> get_array()
    {
        return { 1, 2, 3, 4 };
    }

    static int get_expected_result()
    {
        return 0;
    }
};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array()
    {
        return { 2, 1, 1, 4 };
    }

    static int get_expected_result()
    {
        return 1;
    }
};
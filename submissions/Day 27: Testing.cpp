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
        vector<int> v;
        return v;
    }
};

class TestDataUniqueValues {
public:
    static vector<int> get_array()
    {
        vector<int> v;

        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);

        return v;
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
        vector<int> v;

        v.push_back(2);
        v.push_back(1);
        v.push_back(1);
        v.push_back(4);

        return v;
    }

    static int get_expected_result()
    {
        return 1;
    }
};
/*-----------------------------------------------------------------------

Problem Title: Operator Overloading
Problem Link: https://www.hackerrank.com/challenges/operator-overloading
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


class Matrix {
public:
    vector<vector<int> > a;
    Matrix operator+(Matrix& b)
    {
        int i, j, n, m;

        Matrix result;
        vector<int> v;

        if (b.a.empty())
            return *this;

        n = b.a.size();
        m = b.a[0].size();

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                v.push_back(this->a[i][j] + b.a[i][j]);
            }
            result.a.push_back(v);
            v.clear();
        }

        return result;
    }
};
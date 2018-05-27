/*-----------------------------------------------------------------------

Problem Title: Accessing Inherited Functions
Problem Link: https://www.hackerrank.com/challenges/accessing-inherited-functions
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class D : public A, public B, public C {

    int val;

public:
    //Initially val is 1

    D()

    {

        val = 1;
    }

    //Implement this function

    void update_val(int new_val)

    {

        int i, c2 = 0, c3 = 0, c5 = 0;
        while (new_val != 1) {
            if (new_val % 2 == 0) {
                c2++;
                new_val /= 2;
            }
            else if (new_val % 3 == 0) {
                c3++;
                new_val /= 3;
            }
            else if (new_val % 5 == 0) {
                c5++;
                new_val /= 5;
            }
        }

        for (i = 0; i < c2; i++) {
            this->A::func(val);
        }

        for (i = 0; i < c3; i++) {
            this->B::func(val);
        }

        for (i = 0; i < c5; i++) {
            this->C::func(val);
        }
    }

    //For Checking Purpose

    void check(int); //Do not delete this line.
};
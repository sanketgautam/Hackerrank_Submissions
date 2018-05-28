/*-----------------------------------------------------------------------

Problem Title: Overloading Ostream Operator
Problem Link: https://www.hackerrank.com/challenges/overloading-ostream-operator
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


ostream& operator<<(ostream& out, Person p)
{
    out << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name();
    return out;
}
/*-----------------------------------------------------------------------

Problem Title: Box It!
Problem Link: https://www.hackerrank.com/challenges/box-it
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


//Implement the class Box
//l,b,h are integers representing the dimensions of the box
class Box {
    int l, b, h;

public:
    Box()
    {
        l = b = h = 0;
    }
    Box(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box(Box& B)
    {
        this->l = B.getLength();
        this->b = B.getBreadth();
        this->h = B.getHeight();
    }

    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }

    long long CalculateVolume()
    {
        return (long long)l * (long long)b * (long long)h;
    }
};

bool operator<(Box& A, Box& B)
{
    if ((A.getLength() < B.getLength()) || ((A.getBreadth() < B.getBreadth()) && (A.getLength() == B.getLength())) || ((A.getHeight() < B.getHeight()) && (A.getBreadth() == B.getBreadth()) && (A.getLength() == B.getLength()))) {
        return true;
    }
    return false;
}

ostream& operator<<(ostream& out, Box& B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}
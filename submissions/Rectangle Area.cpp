/*-----------------------------------------------------------------------

Problem Title: Rectangle Area
Problem Link: https://www.hackerrank.com/challenges/rectangle-area
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class Rectangle {
protected:
    int width, height;

public:
    Rectangle()
    {
        width = height = 0;
    }
    void display()
    {
        cout << width << " " << height << "\n";
    }
};

class RectangleArea : public Rectangle {
public:
    void read_input()
    {
        cin >> width >> height;
    }
    void display()
    {
        cout << width * height << "\n";
    }
};
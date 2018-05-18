/*-----------------------------------------------------------------------

Problem Title: Day 13: Abstract Classes
Problem Link: https://www.hackerrank.com/challenges/30-abstract-classes
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


// Write your MyBook class here
class MyBook : public Book {
    int price;

public:
    //   Class Constructor
    //
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    MyBook(string title, string author, double price)
        : Book(title, author)
    {
        this->price = price;
    }

    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    void display()
    {
        cout << "Title: " << this->title << "\n";
        cout << "Author: " << this->author << "\n";
        cout << "Price: " << this->price << "\n";
    }
};
// End class
/*-----------------------------------------------------------------------

Problem Title: Day 12: Inheritance
Problem Link: https://www.hackerrank.com/challenges/30-inheritance
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class Student : public Person {
private:
    vector<int> testScores;

public:
    /*  
  
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
    // Write your constructor here
    Student(string firstName, string lastName, int id, vector<int> scores)
        : Person(firstName, lastName, id)
    {
        this->testScores = scores;
    }
    /*  
  
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
    // Write your function here
    char calculate()
    {
        int sum, avg;
        char grade;

        for (vector<int>::iterator i = this->testScores.begin(); i != this->testScores.end(); i++) {
            sum += *i;
        }

        avg = sum / this->testScores.size();

        if (avg >= 90) {
            grade = 'O';
        }
        else if (avg >= 80) {
            grade = 'E';
        }
        else if (avg >= 70) {
            grade = 'A';
        }
        else if (avg >= 55) {
            grade = 'P';
        }
        else if (avg >= 40) {
            grade = 'D';
        }
        else {
            grade = 'T';
        }

        return grade;
    }
};
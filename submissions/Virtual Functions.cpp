/*-----------------------------------------------------------------------

Problem Title: Virtual Functions
Problem Link: https://www.hackerrank.com/challenges/virtual-functions
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class Person {
public:
    string name;
    int age;
    virtual void getdata()
    {
        cin >> this->name >> this->age;
    }
    virtual void putdata()
    {
        cout << this->name << " " << this->age << endl;
    }
};

class Professor : public Person {
    static int count;

public:
    int publications;
    int cur_id;

    Professor()
    {
        this->cur_id = Professor::count;
        Professor::count++;
    }
    void getdata()
    {
        cin >> this->name >> this->age >> this->publications;
    }
    void putdata()
    {
        cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << "\n";
    }
};

class Student : public Person {
    vector<int> marks;
    int cur_id;
    static int count;

public:
    Student()
    {
        this->cur_id = Student::count;
        Student::count++;
    }
    void getdata()
    {
        cin >> this->name >> this->age;
        int num, i;
        for (i = 0; i < 6; i++) {
            cin >> num;
            this->marks.push_back(num);
        }
    }
    void putdata()
    {
        int i, sum = 0;
        for (i = 0; i < 6; i++) {
            sum += this->marks[i];
        }
        cout << this->name << " " << this->age << " " << sum << " " << this->cur_id << "\n";
    }
};

int Professor::count = 1;
int Student::count = 1;
#include <bits/stdc++.h>
using namespace std;

class Person
{
    string name;

public:
    Person()
    {
        name = "";
    }
    Person(string x)
    {
        name = x;
    }
    virtual void display()
    {
        cout << "This display is from base class" << endl;
        cout << "My name is " << name << endl;
    }
};

class Student : public Person
{
    string course, year;
    float marks;

public:
    Student(string name, string c, float m, string yr) : Person(name)
    {
        course = c;
        marks = m;
        year = yr;
    };
    void display() override
    {
        Person::display();
        cout << "This deisplay is from the drived class" << endl;
        cout << "I am a " << year << " year " << course << " student. I have got " << marks << " SGPA" << endl;
    }
};
class Employee : public Person
{
    string department;
    int salary;

public:
    Employee(string name, string d, int s) : Person(name)
    {
        department = d;
        salary = s;
    };
    void display() override
    {
        Person::display();
        cout << "This deisplay is from the drived class" << endl;
        cout << "I am in " << department << " department and my salary is " << salary << endl;
    }
};

int main()
{
    Student aman("Aman", "B.sc CS Hons", 8.3, "1st");
    Student samyra("Samyra", "Bachelor of fine arts", 9, "1st");
    Employee richa("Richa", "English", 50000);
    richa.display();
    return 0;
}
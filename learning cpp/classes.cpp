#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid)
    {
        length = len;
        width = wid;
    }
    double getArea()
    {
        return length * width;
    }
    double getPerimeter()
    {
        return 2 * (length + width);
    }
};
class Student
{
    string name;
    vector<int> grades;

public:
    Student(string str)
    {
        name = str;
    }
    void addGrade(int grade)
    {
        grades.push_back(grade);
    }
    float getAverage()
    {
        int sum = 0;
        if (grades.empty())
            return 0;
        for (int it : grades)
        {
            sum += it;
        }
        return sum / (float)grades.size();
    }
};

// inheritance
class animal
{
    string pet;

public:
    animal()
    {
        pet = "";
    }
    animal(string name)
    {
        pet = name;
    }
    void makeSound()
    {
        cout << "Moo" << endl;
    }
};
class dog : public animal
{
public:
    dog(string name) : animal(name){};
    void makeSound()
    {
        cout << "Woof" << endl;
    }
};
class cat : public animal
{
public:
    cat(string name) : animal(name){};
    void makeSound()
    {
        cout << "meow" << endl;
    }
};

int main()
{
    // Rectangle myRect(5,4);
    // cout << "The area is " << myRect.getArea() << endl;
    // cout << "The perimeter is " << myRect.getPerimeter() << endl;
    // Student tia("Tia");
    // tia.addGrade(98);
    // tia.addGrade(90);
    // tia.addGrade(78);
    // tia.addGrade(85);
    // tia.addGrade(59);
    // tia.addGrade(70);
    // tia.addGrade(100);
    // cout << tia.getAverage();
    animal mowgli("mowgli");
    mowgli.makeSound();
    dog sheero("sheero");
    cat michan("michan");
    sheero.makeSound();
    michan.makeSound();
    return 0;
}
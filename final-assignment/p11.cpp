#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int rollNo;
    string name;
    string classYear;
    int year;
    int totalMarks;

    Student(int rollNo, const string &name, const string &classYear, int year, int totalMarks)
        : rollNo(rollNo), name(name), classYear(classYear), year(year), totalMarks(totalMarks) {}

    void display()
    {
        cout << "Roll No: " << rollNo << "\nName: " << name << "\nClass: " << classYear
             << "\nYear: " << year << "\nTotal Marks: " << totalMarks << "\n\n";
    }
};

int main()
{
    vector<Student> students = {
        {1, "Alice", "10th", 2022, 95},
        {2, "Bob", "10th", 2022, 90},
        {3, "Charlie", "10th", 2022, 85},
        {4, "Dave", "10th", 2022, 80},
        {5, "Eve", "10th", 2022, 75},
    };

    ofstream ofs("students.txt");
    for (const Student &student : students)
    {
        ofs << student.rollNo << "\n"
            << student.name << "\n"
            << student.classYear << "\n"
            << student.year << "\n"
            << student.totalMarks << "\n";
    }
    ofs.close();

    ifstream ifs("students.txt");
    vector<Student> loadedStudents;
    while (ifs.good())
    {
        int rollNo;
        string name;
        string classYear;
        int year;
        int totalMarks;

        ifs >> rollNo >> name >> classYear >> year >> totalMarks;
        loadedStudents.push_back({rollNo, name, classYear, year, totalMarks});
    }
    ifs.close();

    for (Student &student : loadedStudents)
    {
        student.display();
    }

    return 0;
}
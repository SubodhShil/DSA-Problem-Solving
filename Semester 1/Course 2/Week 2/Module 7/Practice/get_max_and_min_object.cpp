#include <bits/stdc++.h>
using namespace std;

/// Find out the maximum value of among objects and print the details of that object
class Student
{
public:
    string name;
    int roll;
    float marks;

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Roll: " << this->roll << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main()
{
    int stuCnt = 0;
    cout << "Enter the number of students in the class: ";
    cin >> stuCnt;

    Student *allStudents = new Student[stuCnt];

    /// taking user inputs
    for (int i = 0; i < stuCnt; ++i)
    {
        cout << "Enter details for student  " << i + 1 << endl;
        cin >> allStudents[i].name;
        cin >> allStudents[i].roll;
        cin >> allStudents[i].marks;
    }

    int maxMarks = INT32_MIN;
    int minMarks = INT32_MAX;
    Student *firstBoy = new Student;
    Student *lastBoy = new Student;

    for (int i = 0; i < stuCnt; ++i)
    {
        if (allStudents[i].marks > maxMarks)
        {
            maxMarks = allStudents[i].marks;
            *firstBoy = allStudents[i];
        }

        if (allStudents[i].marks < minMarks)
        {
            minMarks = allStudents[i].marks;
            *lastBoy = allStudents[i];
        }
    }

    cout << "\nDisplaying data of firstboy\n";
    cout << "Name: " << firstBoy->name << endl
         << "Roll: " << firstBoy->roll << endl
         << "Marks: " << firstBoy->marks << endl;

    cout << "\nDisplaying data of lastboy\n";
    cout << "Name: " << lastBoy->name << endl
         << "Roll: " << lastBoy->roll << endl
         << "Marks: " << lastBoy->marks << endl;

    return 0;
}
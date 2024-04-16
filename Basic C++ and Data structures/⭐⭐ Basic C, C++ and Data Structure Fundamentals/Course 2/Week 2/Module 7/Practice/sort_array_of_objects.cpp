#include <bits/stdc++.h>
using namespace std;

/// Sort student by their marks

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

bool compFn(Student a, Student b)
{
    return a.marks < b.marks;
}

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

    /// using C++ internal sort() function
    sort(allStudents, allStudents + stuCnt, compFn);

    /// without using the sort() function
    // for (int i = 0; i < stuCnt - 1; ++i)
    // {
    //     for (int j = i + 1; j < stuCnt; ++j)
    //     {
    //         if (allStudents[i].marks > allStudents[j].marks)
    //         {
    //             swap(allStudents[i], allStudents[j]);
    //         }
    //     }
    // }

    /// displaying
    for (int i = 0; i < stuCnt; ++i)
    {
        cout << "-------------------------------\n";
        cout << allStudents[i].name << endl;
        cout << allStudents[i].roll << endl;
        cout << allStudents[i].marks << endl;
    }

    return 0;
}
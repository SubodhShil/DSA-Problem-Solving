#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int marks;

    Student(string name, int id, int marks)
    {
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks <= b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.id > b.id)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    /// creating custom data type priority queue
    priority_queue<Student, vector<Student>, cmp> stuPQ;

    for (int i = 1; i <= n; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj1(name, roll, marks);
        stuPQ.push(obj1);
    }

    while ()
    {
    }

    return 0;
}
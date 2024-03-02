#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    priority_queue<Student, vector<Student>, cmp> stuPQ;

    while (t--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj1(name, roll, marks);
        stuPQ.push(obj1);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int i;
        cin >> i;

        if (i == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student tempObj(name, roll, marks);
            stuPQ.push(tempObj);
            cout << stuPQ.top().name << ' ' << stuPQ.top().roll << ' ' << stuPQ.top().marks << endl;
        }

        else if (i == 1)
        {
            if (stuPQ.empty())
                cout << "Empty\n";
            else
                cout << stuPQ.top().name << ' ' << stuPQ.top().roll << ' ' << stuPQ.top().marks << endl;
        }

        else
        {
            if (!stuPQ.empty())
                stuPQ.pop();

            if (!stuPQ.empty())
                cout << stuPQ.top().name << ' ' << stuPQ.top().roll << ' ' << stuPQ.top().marks << endl;
            else
                cout << "Empty\n";
        }
    }

    return 0;
}
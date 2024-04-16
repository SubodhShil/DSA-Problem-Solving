#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
    float marks;

    void displayData()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll: " << this->roll << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main()
{
    Student A[2];
    for (int i = 0; i < 2; ++i)
    {
        if (cin.peek() == '\n')
            cin.ignore();

        getline(cin, A[i].name);
        cin >> A[i].age;
        cin >> A[i].roll;
        cin >> A[i].marks;
    }

    A[0].displayData();
    A[1].displayData();

    return 0;
}
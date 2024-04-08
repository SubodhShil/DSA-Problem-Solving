#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    char name[100];
    int roll;
    int cls;
    char section;

public:
    Student(char name[], int roll, int cls, char section)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->cls = cls;
        this->section = section;
    }

    void printDetails()
    {
        cout << "Name: " << this->name << endl;
        cout << "Class: " << this->cls << endl;
        cout << "Roll: " << this->roll << endl;
        cout << "Section: " << this->section << endl
             << endl;
    }
};

int main()
{
    Student firstBoy("Korimullah", 22, 5, 'A');
    firstBoy.printDetails();

    Student lastBoy("Rohomotullah", 100, 5, 'B');
    lastBoy.printDetails();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    /// Constructor
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    /// user-defined function
    void sayHello()
    {
        cout << "Hello " << this->name << endl;
        cout << "You're " << this->age << " years old" << endl;
    }
};

int main()
{
    Person Subodh("Subodh Chandra Shil", 23);
    Subodh.sayHello();

    return 0;
}
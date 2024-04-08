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
    Person *Subodh = new Person("Subodh Chandra Shil", 23);
    Person *Antu = new Person("Rajmohan Shil", 20);

    /// Copying an object into another object
    // Subodh = Antu;
    *Subodh = *Antu;

    delete Antu;

    return 0;
}
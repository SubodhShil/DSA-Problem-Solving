#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    Person *firstPerson = new Person("Subodh", 5.6, 23);
    Person *secondPerson = new Person("Antu", 5.5, 20);

    if (firstPerson->age > secondPerson->age)
        cout << firstPerson->name << endl;

    else
        cout << secondPerson->name << endl;

    return 0;
}
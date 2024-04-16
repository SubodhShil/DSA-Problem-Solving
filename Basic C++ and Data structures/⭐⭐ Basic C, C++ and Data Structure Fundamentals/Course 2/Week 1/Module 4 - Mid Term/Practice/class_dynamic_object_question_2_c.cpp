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

    cout << firstPerson->name << endl;
    cout << firstPerson->age << endl;
    cout << firstPerson->height << endl;

    return 0;
}
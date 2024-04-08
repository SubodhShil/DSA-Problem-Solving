#include <bits/stdc++.h>
using namespace std;

namespace Person
{
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
    };

    Person P1("Subodh", 23);
    int age = P1.age;
}

using namespace Person;

int main()
{
    cout << Person::age << endl;

    return 0;
}
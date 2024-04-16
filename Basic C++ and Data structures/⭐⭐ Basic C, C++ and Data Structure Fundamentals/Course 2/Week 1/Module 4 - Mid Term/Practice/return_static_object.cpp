#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    int id;

    Employee(string n, int a, int i)
    {
        name = n;
        age = a;
        id = i;
    }
};

Employee employeeData(string n, int a, int i)
{
    Employee data(n, a, i);

    return data;
}

int main()
{
    Employee person1 = employeeData("Subodh", 22, 333);

    cout << person1.name << " " << person1.age << " " << person1.id << endl;

    return 0;
}
//! Variable and it's scope

#include <bits/stdc++.h>
using namespace std;

int x = 100;

class VariableScope
{
public:
    void try1()
    {
        int x = 200;
        cout << "Global variable value is: " << ::x << endl;
        cout << "Local variable value is: " << x << endl;
        x += ::x;
        cout << "Global + Local variable value is: " << x << endl;

        {
            cout << "We're now inside the local scope." << endl;
            cout << "x = " << x << endl;
            x = 200;
            cout << "Changed value of x = " << x << endl;
            int y = 213;
        }
        cout << x << endl;
    }

    void try2()
    {
        int a = 200;
        cout << "a = " << a << endl;

        {
            // We can re-declare and re-define a variable inside a local scope with whose identifier is already used for creating another variable in another block of scope previously
            a = 500;
            cout << a << endl;
            int a = 5000;
            cout << a << endl;
        }
    }

    void try3()
    {
        int i = 9;

        for (; i < 10; i++)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    VariableScope obj;
    // cout << endl
    //      << endl;
    // obj.try1();
    // cout << endl
    //      << endl;
    // obj.try2();
    obj.try3();

    return 0;
}

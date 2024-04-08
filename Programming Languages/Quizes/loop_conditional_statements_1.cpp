/* Loops recap - Quizes*/

#include <bits/stdc++.h>
using namespace std;

class Questions
{
public:
    void solution1()
    {
        int a, b = 1;
        a = 10;
        if (++a)
            cout << b;
        else
            cout << ++b;
    }

    void solution2()
    {
        int number = 3;
        cout << (25 * (++number)) << endl;
    }

    void solution3()
    {
        int a = 1;
        int b = a++;
        int c = ++a;
        cout << b << endl;
        cout << c;
    }

    void solution4()
    {
        int a = 1;
        int b = 2;

        if (a-- > 0 && ++b > 2)
            cout << "Stage 1 -Inside if" << endl;
        else
            cout << "Stage 2 -Inside else" << endl;
        cout << a << " " << b << " " << endl;
    }

    void solution5()
    {
        // endless loop
        int i = 5;
        for (; i > 1;)
        {
            cout << "endless" << endl;
        }
    }

    void solution6()
    {
        // endless loop
        int x = 1;
        for (;;)
        {
            cout << x << endl;
        }
    }

    void solution7()
    {
        // Print 1 to 10 in for loop but not using initializer variable and updation variable
        int a = 1;
        for (; a <= 10;)
        {
            cout << a << endl;
            a++;
        }
    }
};

int main()
{
    // int a = 8;

    // cout << (a++) << endl; // 8++ => 8
    // cout << (++a) << endl; // 8 -> 9++ => 10
    // cout << (a--) << endl; // 10-- => 10
    // cout << (--a) << endl; // --9 = 8

    Questions obj;
    cout << "Solution 01: ";
    obj.solution1();
    // cout << endl;
    // obj.solution2();
    // cout << endl;
    // obj.solution3();
    // cout << endl;
    // obj.solution4();
    // obj.solution5();
    // obj.solution6();
    // obj.solution7();

    return 0;
}
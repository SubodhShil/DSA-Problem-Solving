#include <bits/stdc++.h>
using namespace std;

/// empty class
class Demo
{
};

class Demo2
{
public:
    int x;   // 4 bytes
    float y; // 4 byte
    char c;  // 1 byte
};

int main()
{
    Demo obj;
    cout << sizeof(obj) << endl;

    Demo2 obj2;
    cout << sizeof(obj2) << endl;

    return 0;
}
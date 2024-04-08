#include <bits/stdc++.h>
using namespace std;

void print(string &s)
{
    s = "World";
}

int main()
{
    string s = "Hello";
    cout << "Previous value: " << s << endl;
    print(s);
    cout << "New value: " << s << endl;

    return 0;
}
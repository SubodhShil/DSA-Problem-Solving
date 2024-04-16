#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    string s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == "+")
    {
        if ((a + b) == c)
            cout << "Yes\n";
        else
            cout << a + b << endl;
    }

    if (s == "-")
    {
        if ((a - b) == c)
            cout << "Yes\n";
        else
            cout << a - b << endl;
    }

    if (s == "*")
    {
        if ((a * b) == c)
            cout << "Yes\n";
        else
            cout << a * b << endl;
    }

    return 0;
}
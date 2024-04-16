#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "A Quick Brown Fox";
    string::iterator it = s.begin();

    for (; it != s.end(); ++it)
    {
        cout << *it << ' ';
    }

    return 0;
}
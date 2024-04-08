#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    /// access element or character of a string by index notation
    cout << s[0] << endl;

    /// access using s.at() built in function
    cout << s.at(0) << endl;

    /// access the first element or character
    cout << s.front() << endl;

    /// access the last element
    cout << s.back() << endl;
    /// or
    cout << s[s.size() - 1];

    return 0;
}
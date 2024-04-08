#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    /// sort() function sorts a string by dictionary order or
    /// lexicographical order or ascii chart order
    sort(s.begin(), s.end());
    cout << s << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool ans()
{
    string s;
    cin >> s;
    int n = s.size();

    int i = 0, j = n - 1;
    while (i < j && j > i)
    {
        if (s[i] != s[j])
            return false;
        ++i, --j;
    }

    return true;
}

int main()
{
    (ans()) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, m, ways = 0;

void ans(int s)
{
    if (s == m)
    {
        ++ways;
        return;
    }

    /// choice 1
    if (s + 1 <= m)
        ans(s + 1);

    /// choice 2
    if (s + 2 <= m)
        ans(s + 2);

    /// choice 3
    if (s + 3 <= m)
        ans(s + 3);
}

int main()
{
    cin >> n >> m;
    ans(n);
    cout << ways << endl;

    return 0;
}
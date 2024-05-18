#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> store;

    for (auto i : s)
    {
        if (!store.empty() && ((i == 'A' && store.top() == 'B') || (i == 'B' && store.top() == 'A')))
            store.pop();
        else
            store.push(i);
    }

    if (store.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    map<int, vector<int>> mp;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        mp[u].push_back(v);
    }

    for (auto i : mp)
    {
        sort(i.second.begin(), i.second.end());
        for (auto j : i.second)
            cout << i.first << ' ' << j << endl;
    }

    return 0;
}
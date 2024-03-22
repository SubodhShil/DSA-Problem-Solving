#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int n, k;
    cin >> n >> k;
    k = k << 1;

    vector<int> ans1(k), ans2(k);
    map<int, int> mp;   

    for (int i = 1; i <= (n << 1); ++i)
    {
        int x;
        cin >> x;
        if (i <= n)
            mp[x]++;
    }

    // for(auto i : mp) cout << i.first << ' ' << i.second << endl;

    int x = 0, y = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (mp.count(i) and mp[i] == 2 and x < k)
            ans1[x] = ans1[x + 1] = i, x += 2;
        if (mp.count(i) == 0 and y < k)
            ans2[y] = ans2[y + 1] = i, y += 2;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (mp[i] == 1 and x < k and y < k)
        {
            ans1[x] = ans2[y] = i;
            ++x, ++y;
        }
    }

    for (auto x : ans1)
        cout << x << " ";
    cout << endl;
    for (auto x : ans2)
        cout << x << " ";
    cout << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
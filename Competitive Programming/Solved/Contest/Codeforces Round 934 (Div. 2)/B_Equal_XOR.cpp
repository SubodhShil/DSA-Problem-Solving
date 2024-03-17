#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod1 1000000007
#define mod2 998244353

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(2 * n);
    map<int, int> mp1;
    map<int, int> mp2;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> v[i];
        if (i < n)
        {
            mp1[v[i]]++;
        }
        else
        {
            mp2[v[i]]++;
        }
    }

    vector<int> l;
    vector<int> r;

    for (auto x : mp1)
    {
        if (mp2.find(x.first) != mp2.end() and l.size() < 2 * k)
        {
            l.push_back(x.first);
            r.push_back(x.first);
        }
    }

    for (auto x : mp1)
    {
        if (l.size() < 2 * k and x.second == 2)
        {
            l.push_back(x.first);
            l.push_back(x.first);
        }
    }

    for (auto x : mp2)
    {
        if (r.size() < 2 * k and x.second == 2)
        {
            r.push_back(x.first);
            r.push_back(x.first);
        }
    }

    // display
    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test;
    cin >> test;

    while (test--)
    {
        solve();
    }
    return 0;
}
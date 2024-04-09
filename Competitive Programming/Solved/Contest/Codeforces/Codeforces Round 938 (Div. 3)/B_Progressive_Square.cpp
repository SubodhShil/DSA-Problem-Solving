#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<pll> vpll;

#define pb push_back
#define inf 1e9

int main()
{
    int t;
    cin >> t;

    for (int case_num = 1; case_num <= t; ++case_num)
    {
        ll n, c, d;
        cin >> n >> c >> d;

        vll v(n * n);
        multiset<ll> s;

        for (int i = 0; i < n * n; ++i)
        {
            cin >> v[i];
            s.insert(v[i]);
        }

        sort(v.begin(), v.end());

        ll ct = 0, pt = 0;
        vll u;

        while (ct < n)
        {
            ll qt = *s.begin();
            u.pb(qt);

            for (int j = 0; j < n; ++j)
            {
                auto it = s.find(qt);

                if (it == s.end())
                {
                    pt = 1;
                    break;
                }
                else
                {
                    s.erase(it);
                    qt += c;
                }
            }

            if (pt)
            {
                break;
            }
            ct++;
        }

        for (int i = 0; i < u.size() - 1; ++i)
        {
            if (u[i + 1] - u[i] != d)
            {
                pt = 1;
                break;
            }
        }

        if (pt)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}

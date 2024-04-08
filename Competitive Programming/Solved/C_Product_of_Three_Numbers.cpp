#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio, cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> st;

        for (ll i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                st.insert(i);
                n /= i;

                if (st.size() == 2)
                {
                    st.insert(n);
                    break;
                }
            }
        }

        if (st.size() <= 2)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (auto i : st)
                cout << i << ' ';
            cout << endl;
        }
    }

    return 0;
}
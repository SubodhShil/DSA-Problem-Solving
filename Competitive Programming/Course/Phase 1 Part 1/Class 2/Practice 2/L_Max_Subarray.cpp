#include <bits/stdc++.h>
using namespace std;

#define int long long

#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define yes                    \
    {                          \
        cout << "YES" << endl; \
    }
#define no                    \
    {                         \
        cout << "NO" << endl; \
    }

/// for loops
#define fori(x) for (int i = 0; i < x; i++)
#define forj(x) for (int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    for (int j = 0; j < n; ++j)
    {
        for (int a = 0, b = j; b < n; ++a, ++b)
        {
            int maxEle = INT32_MIN;
            for (int l = a; l <= b; ++l)
            {
                maxEle = max(maxEle, v[l]);
            }

            cout << maxEle << " ";
        }
    }

    cout << endl;
}

int32_t main()
{
    superfast int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}
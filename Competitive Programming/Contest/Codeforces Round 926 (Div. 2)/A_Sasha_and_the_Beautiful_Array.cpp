#include <bits/stdc++.h>
using namespace std;
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
#define int long long
#define endl "\n"

void res()
{
    int x;
    cin >> x;
    vector<int> vec(x);
    for (auto &i : vec)
        cin >> i;

    sort(vec.begin(), vec.end());

    int n = 0;
    for (int i = 1; i < x; ++i)
        n += (vec[i] - vec[i - 1]);

    cout << n << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res();
    }

    return 0;
}
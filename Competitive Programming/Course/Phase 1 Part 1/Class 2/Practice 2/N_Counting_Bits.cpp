#include <bits/stdc++.h>
using namespace std;

#define countSetBit(n) __builtin_popcount(i);

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        /* for (int j = 0; j < 10; ++j)
        {
            bool nthBit = ((i >> j) & 1);
            if (nthBit) ++cnt;
        } */
        cnt += countSetBit(i);
    }
    cout << cnt << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/atcoder-abc061_c
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void ans()
{
    cin >> n >> k;
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        int a, b;

        cin >> a >> b;
        mp[a] += b;
    }

    for (auto x : mp)
    {
        k -= x.second;
        if (k <= 0)
        {
            cout << x.first << endl;
            return;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
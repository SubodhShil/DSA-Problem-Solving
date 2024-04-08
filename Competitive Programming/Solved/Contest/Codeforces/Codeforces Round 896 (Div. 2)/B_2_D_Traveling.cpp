/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1869/problem/B
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e7 + 5;
int x[N], y[N];

void ans()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x[i] >> y[i];
    }

    int dis1 = 1e18, dis2 = 1e18;
    for (int i = 1; i <= k; ++i)
    {
        dis1 = min(dis1, (abs(x[a] - x[i]) + abs(y[a] - y[i])));
        dis2 = min(dis2, (abs(x[b] - x[i]) + abs(y[b] - y[i])));
    }

    cout << min(dis1 + dis2, (abs(x[a] - x[b]) + abs(y[a] - y[b]))) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
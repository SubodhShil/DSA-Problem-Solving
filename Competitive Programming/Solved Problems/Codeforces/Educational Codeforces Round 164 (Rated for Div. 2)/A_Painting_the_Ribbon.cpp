/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1954/problem/A
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, m, k;

void ans()
{
    cin >> n >> m >> k;
    int cnt = (n + m - 1) / m;
    if (n - cnt <= k)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/2013/problem/A
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
    cin >> n >> m >> a;
    int x = min(m, a);
    cout << ((n % x == 0) ? n / x : n / x + 1) << endl;
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
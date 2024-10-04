/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/2020/problem/A
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

int intlog(int a, int b)
{
    int ans = 0;
    while (a > 1)
    {
        a /= b;
        ans++;
    }
    return ans;
}

void ans()
{
    cin >> n >> a;
    if (a > n or a == 1)
    {
        cout << n << endl;
        return;
    }

    int cnt = 0;
    while (n)
    {
        int p = intlog(a, n);
        int val = powl(a, p);
        cout << n << ' ' << p << " cnt: " << cnt << endl;
        ++cnt;
        n -= val;
    }

    cout << cnt << endl;
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
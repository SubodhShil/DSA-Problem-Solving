/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/atcoder-arc088_a
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

void ans()
{
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    while (x <= y)
    {
        ++cnt;
        x *= 2;
    }

    cout << cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
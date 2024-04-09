/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/spoj-ololo
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        ans ^= x;
    }

    cout << ans << endl;

    return 0;
}
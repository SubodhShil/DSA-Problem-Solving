/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil
    * Tag: Recursion
                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int cnt = 0;

int ans(int a, int b, int cnt = 0)
{
    if (a >= b + 10)
    {
        return cnt;
    }

    int res = min(ans(a + 2, b, ++cnt), ans(a + 3, b, ++cnt));
    return res;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a - b >= 10)
        cout << "0\n";
    else
        cout << ans(a, b) << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // solve();

        int a, b;
        cin >> a >> b;
        if (a - b >= 10)
            cout << "0\n";
        else
        {
            int x = a - b;
            int y = 10 - x;
            int res = min(ceil(y / 3.0), ceil(y / 2.0));
            cout << res << endl;
        }
    }

    return 0;
}
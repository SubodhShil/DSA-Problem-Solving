/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag:
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

void ans()
{
    int l, r;
    cin >> n >> l >> r;
    int cnt = 0, maxe = 0, mine = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x >= l and x <= r)
            ++cnt;
        else
            --cnt;
        maxe = max(maxe, cnt), mine = min(mine, cnt);
    }
    cout << maxe << ' ' << mine << endl;
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

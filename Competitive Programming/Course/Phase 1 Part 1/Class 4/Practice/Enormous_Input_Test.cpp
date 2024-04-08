/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil
    * Tag: Nothing

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, x, cnt;

void ans()
{
    cin >> n;
    if (n % x == 0)
        ++cnt;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t >> x;
    while (t--)
        ans();

    cout << cnt << endl;

    return 0;
}

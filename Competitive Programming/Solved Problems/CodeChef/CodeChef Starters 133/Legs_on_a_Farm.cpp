/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/START133D/problems/FARMLEGS
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
    cin >> n;
    int cnt = 0;

    if (n == 2)
        cout << 1 << endl;
    else
    {
        cnt = (n / 4);
        n %= 4;
        cnt += (n / 2);
        cout << cnt << endl;
    }
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
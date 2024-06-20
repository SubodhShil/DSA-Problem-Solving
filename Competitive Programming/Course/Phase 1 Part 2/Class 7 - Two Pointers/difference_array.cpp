/*
                            ॐ JAY JAY SRI RAM ॐ

    * Difference Array
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int n;

const int N = 1e6 + 9;
int a[N], d[N], d_ps[N];

void ans()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
        d[i] = a[i] - a[i - 1];

    for (int i = 1; i <= n; ++i)
        cout << d[i] << ' ';

    cout << endl;

    /* Prefix sum of difference array */
    for (int i = 1; i <= n; ++i)
    {
        d_ps[i] = d_ps[i - 1] + d[i];
    }

    for (int i = 1; i <= n; ++i)
        cout << d_ps[i] << ' ';
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
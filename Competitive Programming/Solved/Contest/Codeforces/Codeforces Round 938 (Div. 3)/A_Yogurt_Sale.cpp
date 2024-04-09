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
    int n, a, b;
    cin >> n >> a >> b;
    if (b > a * 2)
    {
        cout << a * n << endl;
    }
    else
    {
        if (n & 1)
            cout << (((n - 1) / 2) * b) + a << endl;
        else
            cout << (n / 2) * b << endl;
    }
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
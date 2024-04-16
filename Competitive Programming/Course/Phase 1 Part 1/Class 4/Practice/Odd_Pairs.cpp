/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/codechef-oddpairs
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
    cin >> n;
    int evenCnt = (n / 2), oddCnt = (n & 1) ? (n / 2) + 1 : (n / 2);
    cout << (evenCnt * 2) * oddCnt << endl;
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
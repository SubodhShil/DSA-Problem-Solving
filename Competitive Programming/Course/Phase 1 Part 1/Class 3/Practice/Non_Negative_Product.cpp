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
int n, x;

void ans()
{
    cin >> n;
    int zero_cnt = 0, neg_cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x == 0)
            ++zero_cnt;
        if (x < 0)
            ++neg_cnt;
    }

    if (zero_cnt or neg_cnt % 2 == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}

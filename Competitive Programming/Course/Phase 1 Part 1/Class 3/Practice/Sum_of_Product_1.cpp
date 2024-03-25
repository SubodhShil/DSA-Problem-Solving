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
int n;

/// just find out the consecutive 1's subarray size and apply AP sum formula
void ans()
{
    cin >> n;
    vector<int> v(n, 0);
    for (auto &i : v)
        cin >> i;

    int res = 0, oneCnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i])
            ++oneCnt;
        else
        {
            res += (oneCnt * (oneCnt + 1) >> 1);
            oneCnt = 0;
        }
    }

    if (oneCnt)
        res += (oneCnt * (oneCnt + 1) >> 1);

    cout << res << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}

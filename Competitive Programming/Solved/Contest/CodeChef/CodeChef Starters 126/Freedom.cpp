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

void ans()
{
    cin >> n;
    map<int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > 1 and (3 * x) % (x - 1) == 0)
        {
            cnt += mp[(3 * x) / (x - 1)];
        }
        mp[x]++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
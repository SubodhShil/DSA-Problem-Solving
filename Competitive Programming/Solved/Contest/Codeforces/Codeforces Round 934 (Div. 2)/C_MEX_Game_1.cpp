/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1944/problem/C
    * Author: Subodh Chandra Shil

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
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int ans = 0;
    bool secondSmallest = 0;

    for (int i = 0; i < n; ++i)
    {
        if (!mp.count(i))
        {
            cout << i << endl;
            return;
        }
        else if (mp[i] == 1)
        {
            if (!secondSmallest)
                secondSmallest = 1;
            else if (secondSmallest)
            {
                cout << i << endl;
                return;
            }
        }
    }

    cout << n << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
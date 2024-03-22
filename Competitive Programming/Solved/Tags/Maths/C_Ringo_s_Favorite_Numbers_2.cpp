/*
                            ॐ JAY JAY SRI RAM ॐ

    * 
    * Author: Subodh Chandra Shil
    * Tag: Math
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    map<int, int> mp;
    int n = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        cnt += mp[x % 200];
        mp[x % 200]++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}
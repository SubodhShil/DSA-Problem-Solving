/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.spoj.com/problems/CSUMQ/
    * Author: Subodh Chandra Shil
    * Tag: Prefix sum

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int totalSum = 0;
    for (auto &x : v)
    {
        cin >> x;
        totalSum += x;
    }

    for (int i = 1; i < n; ++i)
        v[i] += v[i - 1];

    int x;
    cin >> x;
    for (int i = 1; i <= x; ++i)
    {
        int l, r;
        cin >> l >> r;
        if (l - 1 >= 0)
            cout << (v[r] - v[l - 1]) << endl;
        else
            cout << v[r] << endl;
    }
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}
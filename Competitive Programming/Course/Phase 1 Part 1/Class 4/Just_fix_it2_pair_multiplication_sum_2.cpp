/*
                            ॐ JAY JAY SRI RAM ॐ

    * Given an array of n integers, find the sum of a[i] x a[j] for all 1 <= i < j <= n
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
    vector<int> v(n, 0);
    int ans = 0;
    for (auto &x : v)
    {
        cin >> x;
    }

    int suffix_sum[n + 1]{0};
    for (int i = n - 1; i >= 0; --i)
        suffix_sum[i] = suffix_sum[i + 1] + v[i];

    for (int i = 0; i < n; ++i)
        cout << suffix_sum[i] << " ";

    for (int i = 0; i < n; ++i)
    {
        int sum = v[i] * suffix_sum[i + 1];
        ans += sum;
    }

    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}
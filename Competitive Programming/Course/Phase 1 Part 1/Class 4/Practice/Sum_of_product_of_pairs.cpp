/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/atcoder-abc177_c
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
int n;

void ans()
{
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    vector<int> suffix_sum(n, 0);
    // partial_sum(v.rbegin(), v.rend(), suffix_sum.rbegin());

    suffix_sum[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; --i)
        suffix_sum[i] = (suffix_sum[i + 1] % MOD + v[i] % MOD) % MOD;

    int sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int val = (v[i] % MOD * suffix_sum[i + 1] % MOD) % MOD;
        sum += val;
        sum %= MOD;
    }

    cout << sum << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1946/problem/B
    * Author: Subodh Chandra Shil
    * Tag: Math, Kadanes algorithm

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
int n, k;

const int MOD = 1e9 + 7;

int arithmeticMOD(int x = 0, int y = 0)
{
    x = (x % MOD + MOD) % MOD;
    y = (y % MOD + MOD) % MOD;

    return (x + y) % MOD;
}

void solve()
{
    cin >> n >> k;
    int x = 0, y = 0;

    vector<int> v(n, 0);
    int total_sum = 0, current_sum = 0, maxSum = 0;
    for (auto &i : v)
    {
        cin >> i;
        total_sum += i;
        current_sum += i;
        maxSum = max(maxSum, current_sum);
        current_sum = max(current_sum, 0LL);
    }

    x = arithmeticMOD(total_sum, 0), y = arithmeticMOD(maxSum, 0);
    // cout << x << ' ' << y << endl;

    for (int i = 1; i <= k; ++i)
    {
        x = (x + y) % MOD;
        y = (y * 2) % MOD;
    }

    cout << x << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
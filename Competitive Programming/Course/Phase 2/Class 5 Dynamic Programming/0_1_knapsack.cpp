/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/atcoder-dp_d
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n, k, m, a, b, c, weight_limit;
const int N = 105;
int w[N], v[N];

int knapsack_recursive(int i, int weight)
{
    if (i == n + 1)
        return 0;

    // nibo na
    int ans = knapsack_recursive(i + 1, weight);

    // nibo
    if (weight + w[i] <= weight_limit)
        ans = max(ans, knapsack_recursive(i + 1, weight + w[i]) + v[i]);

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> weight_limit;

    for (int i = 1; i <= n; ++i)
    {
        cin >> w[i] >> v[i];
    }

    cout << knapsack_recursive(1, 0) << endl;

    return 0;
}
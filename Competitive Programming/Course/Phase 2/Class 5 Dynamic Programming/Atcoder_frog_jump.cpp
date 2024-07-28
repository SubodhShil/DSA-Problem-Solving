/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e5 + 17;
int cost[N];
int dp[N]{-1};

int solve(int i)
{
    if (i == n)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    /* int way1 = 0, way2 = 0;

    if (i + 1 <= n)
        way1 = abs(cost[i] - cost[i + 1]) + solve(i + 1);

    if (i + 2 <= n)
        way2 = abs(cost[i] - cost[i + 2]) + solve(i + 2); */

    int calculation = INT32_MAX;
    for (int j = 1; j <= 2; ++j)
    {
        if (i + j <= n)
        {
            int x = abs(cost[i] - cost[i + 1]) + solve(i + j);
            calculation = min(calculation, x);
        }
    }

    // dp[i] = min(way1, way2);
    return dp[i] = calculation;
}

int32_t main()
{
    cin >> n;
    memset(dp, -1, sizeof(dp));

    for (int i = 1; i <= n; ++i)
    {
        cin >> cost[i];
    }

    cout << solve(1) << endl;

    return 0;
}
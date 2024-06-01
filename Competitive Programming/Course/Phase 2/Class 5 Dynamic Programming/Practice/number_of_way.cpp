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

const int N = 1e5 + 7;
int dp[N];

int ways(int i)
{
    if (i == 0 or i == 1)
        return i;
    if (i == 3)
        return 2;

    if (dp[i] != -1)
        return dp[i];

    dp[i] = ways(i - 1) + ways(i - 3);
    return dp[i];
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    memset(dp, -1, sizeof(dp));

    while (t--)
    {
        cin >> n;
        cout << ways(n) << endl;
    }

    return 0;
}
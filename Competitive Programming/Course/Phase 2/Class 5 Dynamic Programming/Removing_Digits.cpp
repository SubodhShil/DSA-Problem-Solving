/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/cses-1637
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
const int N = 1e6 + 9;
int dp[N];

int ways(int n)
{
    if (n == 0)
        return 0;
    if (n >= 1 and n <= 9)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    int temp = n;
    vector<int> digits;

    while (temp)
    {
        if (temp % 10 > 0)
            digits.push_back(temp % 10);
        temp /= 10;
    }

    int ans = INT32_MAX;
    for (auto digit : digits)
        ans = min(ans, 1 + ways(n - digit));

    return dp[n] = ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    memset(dp, -1, sizeof dp);

    cin >> n;
    cout << ways(n) << endl;

    return 0;
}
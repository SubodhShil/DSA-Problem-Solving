#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int w[n];
        for (int i = 0; i < n; ++i)
            cin >> w[i];

        int remain = 1000 - s;

        if (remain == 0)
            cout << "1\n";
        else
        {
            int dp[n + 1][remain + 1];

            dp[0][0] = 1;

            for (int i = 1; i <= remain; ++i)
            {
                dp[0][i] = 0;
            }

            for (int i = 1; i <= n; ++i)
            {
                for (int j = 0; j <= remain; ++j)
                {
                    if (j >= w[i - 1])
                        dp[i][j] = dp[i][j - w[i - 1]] % MOD + dp[i - 1][j] % MOD;
                    else
                        dp[i][j] = dp[i - 1][j] % MOD;
                }
            }

            if (dp[n][remain] > MOD)
                cout << dp[n][remain] % MOD << endl;
            else
                cout << dp[n][remain] << endl;
        }
    }

    return 0;
}
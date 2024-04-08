#include <bits/stdc++.h>
using namespace std;

const int INF = INT32_MAX;

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
            cout << "0\n";
        else
        {
            int dp[n + 1][remain + 1];
            dp[0][0] = 0;

            for (int i = 1; i <= remain; i++)
                dp[0][i] = INT_MAX - 1;

            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= remain; j++)
                {
                    if (w[i - 1] <= j)
                        dp[i][j] = min(1 + dp[i][j - w[i - 1]], dp[i - 1][j]);
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }
            if (dp[n][remain] == INT_MAX - 1)
                cout << "-1" << endl;
            else
                cout << dp[n][remain] << endl;
        }
    }

    return 0;
}
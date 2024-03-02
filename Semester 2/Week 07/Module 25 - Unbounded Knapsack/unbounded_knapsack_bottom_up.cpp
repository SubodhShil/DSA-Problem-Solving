#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int value[n], weight[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> value[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> weight[i];
    }

    int dp[n + 1][s + 1];
    dp[0][0] = 0;

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= s; ++j)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= s; ++j)
        {
            if (j >= weight[i - 1])
                dp[i][j] = max(dp[i][j - weight[i - 1]] + value[i - 1], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][s] << endl;

    return 0;
}

/*
----------
Testcase 1
----------
Input:
4 6
5 3 2 4
4 1 3 2
Output:
18

 */
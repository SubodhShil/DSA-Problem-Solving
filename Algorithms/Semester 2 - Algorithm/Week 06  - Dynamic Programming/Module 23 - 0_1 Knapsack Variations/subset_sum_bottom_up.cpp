#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int setArray[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> setArray[i];
    }

    int sum;
    cin >> sum;
    bool dp[n + 1][sum + 1];
    dp[0][0] = true;

    for (int i = 1; i <= n; ++i)
        dp[0][i] = false;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            if (j >= setArray[i - 1])
            {
                // bool op1 = dp[i - 1][j - setArray[i - 1]];
                // bool op2 = dp[i - 1][j];
                dp[i][j] = dp[i - 1][j - setArray[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    /// result
    /* if (dp[n][sum])
        cout << "YES\n";
    else
        cout << "NO\n"; */

    /// get which sum values are possible to generate
    for (int i = 0; i <= sum; ++i)
    {
        cout << dp[n][i] << " ";
    }

    return 0;
}

/*

----------
Testcase 1
----------

Input:
4
1 2 3 6
12

 */
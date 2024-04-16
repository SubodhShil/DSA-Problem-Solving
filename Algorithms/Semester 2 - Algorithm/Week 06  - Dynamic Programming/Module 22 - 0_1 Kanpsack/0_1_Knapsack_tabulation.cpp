#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;

    int n, capacity;
    cin >> n >> capacity;
    int dp[n + 1][capacity + 1];
    int values[n], weight[n];

    for (int i = 0; i < n; ++i)
        cin >> weight[i];

    for (int i = 0; i < n; ++i)
        cin >> values[i];

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= capacity; ++j)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= capacity; ++j)
        {
            if (j >= weight[i - 1])
            {
                int op1 = dp[i - 1][j - weight[i - 1]] + values[i - 1];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][capacity] << endl;

    return 0;
}
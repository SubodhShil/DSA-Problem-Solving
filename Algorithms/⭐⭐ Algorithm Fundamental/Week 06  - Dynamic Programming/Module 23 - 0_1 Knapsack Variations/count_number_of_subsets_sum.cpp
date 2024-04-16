#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

/// Bottom-up approach
int subset_sum(int n, int sum, int setArray[])
{
    /// base case
    if (n == 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (dp[n][sum] != -1)
        return dp[n][sum];

    if (sum >= setArray[n - 1])
    {
        int choice1 = subset_sum(n - 1, sum - setArray[n - 1], setArray);
        int choice2 = subset_sum(n - 1, sum, setArray);

        return dp[n][sum] = (choice1 + choice2);
    }

    else
        return dp[n][sum] = subset_sum(n - 1, sum, setArray);
}

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

    /// uncomment for top-bottom approach
    // memset(dp, -1, sizeof(dp));
    // cout << subset_sum(n, sum, setArray) << endl;

    /// bottom-up approach
    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i)
        dp[0][i] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            if (j >= setArray[i - 1])
            {
                dp[i][j] = dp[i - 1][j - setArray[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << ;

    return 0;
}

/*
----------
Testcase 1
----------
Input:
4
1 2 3 4
5
Output:
1

----------
Testcase 2
----------
Input:
6
1 12 7 5 4 2
13
Output:
3

----------
Testcase 3
----------
Input:
6
1 2 3 4 5 6
7
Output:
4

 */
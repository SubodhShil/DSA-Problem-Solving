#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
bool subset_sum(int n, int sum, int setArray[])
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
        bool choice1 = subset_sum(n - 1, sum - setArray[n - 1], setArray);
        bool choice2 = subset_sum(n - 1, sum, setArray);

        return dp[n][sum] = (choice1 || choice2);
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
    memset(dp, -1, sizeof(dp));

    cout << subset_sum(n, sum, setArray) << endl;

    return 0;
}

/*
--------
Testcase
--------
Input:
4
1 2 3 4
5
Output:
1
 */
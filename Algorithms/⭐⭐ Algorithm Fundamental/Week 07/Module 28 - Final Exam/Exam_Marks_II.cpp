#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
bool subset_sum(int n, int remain, int setArray[])
{
    if (n == 0)
    {
        if (remain == 0)
            return true;
        else
            return false;
    }

    if (dp[n][remain] != -1)
        return dp[n][remain];

    if (setArray[n - 1] - remain <= 0)
    {
        bool choice1 = subset_sum(n, remain - setArray[n - 1], setArray);
        bool choice2 = subset_sum(n - 1, remain, setArray);
        return dp[n][remain] = (choice1 || choice2);
    }
    else
        return dp[n][remain] = subset_sum(n - 1, remain, setArray);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mark;
        cin >> n >> mark;
        int setArray[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> setArray[i];
        }

        int remain = 1000 - mark;
        memset(dp, -1, sizeof(dp));

        if (subset_sum(n, remain, setArray))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
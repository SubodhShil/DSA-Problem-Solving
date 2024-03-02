#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 2, -1), heights(n + 2);

    for (int i = 1; i <= n; ++i)
    {
        cin >> heights[i];
    }

    /// base case or known values
    dp[1] = 0;
    dp[2] = abs(heights[2] - heights[1]);

    for (int i = 3; i <= n; ++i)
    {
        int choice1 = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        int choice2 = dp[i - 1] + abs(heights[i] - heights[i - 1]);

        dp[i] = min(choice1, choice2);
    }
    cout << dp[n] << endl;

    return 0;
}
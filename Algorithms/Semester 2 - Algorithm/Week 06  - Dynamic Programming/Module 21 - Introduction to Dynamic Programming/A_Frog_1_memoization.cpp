/* https://atcoder.jp/contests/dp/tasks/dp_a */

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> heights(N), dp(N, -1);

int solve(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return dp[n] = abs(heights[2] - heights[1]);

    /// memoization
    if (dp[n] != -1)
        return dp[n];

    int choiceA = abs(heights[n] - heights[n - 1]) + solve(n - 1);
    int choiceB = abs(heights[n] - heights[n - 2]) + solve(n - 2);

    int result = min(choiceA, choiceB);
    dp[n] = result;

    return result;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> heights[i];
    }

    cout << solve(n) << endl;

    return 0;
}
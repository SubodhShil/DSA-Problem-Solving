#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> dp(N, -1);

int factMemoization(int n)
{
    if (n <= 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = n * factMemoization(n - 1);
    return dp[n];
}

int factTabulation(int n)
{
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        dp[i] = i * dp[i - 1];
    }

    return dp[n];
}

int main()
{
    cout << factMemoization(5) << endl;
    cout << factTabulation(5) << endl;

    return 0;
}

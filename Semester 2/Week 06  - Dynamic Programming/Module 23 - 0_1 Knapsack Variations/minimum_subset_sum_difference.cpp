#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    bool dp[n + 1][sum + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= sum; ++i)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            if (j >= i)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    vector<int> v;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            if (dp[i][j])
                v.push_back(j);
        }
    }

    int ans = INT32_MAX;
    for (auto i : v)
    {
        int s1 = i;
        int s2 = sum - s1;
        ans = min(ans, abs(s1 - s2));
    }

    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int difference;
    cin >> difference;
    int s1 = (difference + sum) / 2;

    if (s1 % 2 != 0)
    {
        cout << "Not possible to get answer\n";
        exit(0);
    }

    int target = s1 / 2;
    bool dp[n + 1][target + 1];
    dp[0][0] = true;
    for (int i = 1; i <= target; ++i)
        dp[0][i] = false;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= target; ++j)
        {
            if (j >= i)
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    vector<int> v;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int target = sum / 2;
            bool dp[n + 1][target + 1];
            dp[0][0] = true;

            for (int i = 1; i <= target; ++i)
                dp[0][i] = false;

            for (int i = 1; i <= n; ++i)
            {
                for (int j = 0; j <= target; ++j)
                {
                    if (j >= arr[i - 1])
                    {
                        dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                    }
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }

            if (dp[n][target])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

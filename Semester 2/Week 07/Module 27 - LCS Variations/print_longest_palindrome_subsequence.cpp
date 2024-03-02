#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    int n = s1.size();
    int m = n;

    int dp[n + 1][m + 1];

    /// base case
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    /// other cases
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    /// generating the subsequence string
    string result = "";
    int i = n, j = m;
    while (i != 0 && j != 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            result += s1[i - 1];
            /// go to the corner
            --i, --j;
        }
        else
        {
            if (dp[i][j - 1] > dp[i - 1][j])
                --j;
            else
                --i;
        }
    }

    reverse(result.begin(), result.end());
    cout << result << endl;

    return 0;
}

/*

----------
Testcase 1
----------

Input:
mkadbram

Output:
madam
 */
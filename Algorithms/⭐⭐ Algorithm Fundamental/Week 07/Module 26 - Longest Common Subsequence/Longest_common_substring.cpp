#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s1.size(), size2 = s2.size();
    int dp[size1 + 1][size2 + 2];

    /// base case
    for (int i = 0; i <= size1; ++i)
    {
        for (int j = 0; j <= size2; ++j)
        {
            dp[i][j] = 0;
        }
    }

    /// others
    for (int i = 1; i <= size1; ++i)
    {
        for (int j = 1; j <= size2; ++j)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            /// substring always maintains a serial order
            /// if it doesn't abide by serial manner
            /// we have init 0
            else
                dp[i][j] = 0;
        }
    }

    /// loop through the tabulation and track the maximum result

    int substringRes = 0;
    int ci = 0, cj = 0;
    for (int i = 0; i <= size1; ++i)
    {
        for (int j = 0; j <= size2; ++j)
        {
            // substringRes = max(substringRes, dp[i][j]);
            if (dp[i][j] > substringRes)
            {
                substringRes = dp[i][j];
                ci = i;
                cj = j;
            }
        }
    }

    cout << substringRes << endl;

    string ans = "";
    while (ci != 0 && cj != 0)
    {
        if (s1[ci - 1] == s2[cj - 1])
        {
            ans += s1[ci - 1];
            --ci, --cj;
        }
        else
            break;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}

/*

----------
Testcase 1
----------

Input:
abeghr
beabegrh

Output:
4
abeg

----------
Testcase 2
----------

Input:
aceghr
acaeghbr

Output:
3
egh
 */
/**
 * @file        Is_String_A_Subsequence_of_String_B.cpp
 * @author      Subodh Chandra Shil
 * @author      https://leetcode.com/problems/is-subsequence/
 */

#include <bits/stdc++.h>
using namespace std;

/* Two pointer approach */
/// Time complexity: O(N + M)
class Solution1
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = s.size();
        int m = t.size();

        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (s[i] == t[j])
                ++i;
            ++j;

            if (i == n)
                break;
        }

        return (i == n) ? 1 : 0;
    }
};

class Solution2
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = s.size();
        int x = 0;
        for (auto i : t)
        {
            if (s[x] == i)
                ++x;
            if (x == n)
                return true;
        }

        return (x == n) ? 1 : 0;
    }
};

class Solution3
{
public:
    bool isSubsequence(string a, string b)
    {
        int n = a.size(), m = b.size();
        int dp[n + 1][m + 1];

        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= m; ++j)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (a[i - 1] == b[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return (dp[n][m] == a.size()) ? 1 : 0;
    }
};

int main()
{

    return 0;
}
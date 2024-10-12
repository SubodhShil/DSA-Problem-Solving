/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/longest-palindromic-substring/?envType=problem-list-v2&envId=dynamic-programming&difficulty=MEDIUM
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    // int dp[1009][1009];

    /* bool checkPalindromeDP(string s, int i, int j)
    {
        if(i >= j)
            return true;

        if(dp[i][j] != -1)
            return dp[i][j];

        if(s[i] == s[j])
            return dp[i][j] = checkPalindrome(s, i + 1, j - 1);

        return dp[i][j] = false;
    } */

    bool checkPalindrome(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            ++i, --j;
        }

        return true;
    }

    string longestPalindrome(string s)
    {

        int n = s.size();
        // memset(dp, -1, sizeof dp);

        int maxSize = 0;
        string result = "";

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                if (checkPalindrome(s, i, j) and (j - i + 1) > maxSize)
                {
                    maxSize = j - i + 1;
                    result.clear();
                    result = s.substr(i, maxSize);
                }
            }
        }

        return result;
    }
};

class Solution2
{
public:
    // int dp[1009][1009];

    /* bool checkPalindromeDP(string s, int i, int j)
    {
        if(i >= j)
            return true;

        if(dp[i][j] != -1)
            return dp[i][j];

        if(s[i] == s[j])
            return dp[i][j] = checkPalindrome(s, i + 1, j - 1);

        return dp[i][j] = false;
    } */

    bool checkPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            ++i, --j;
        }

        return true;
    }

    string longestPalindrome(string s)
    {

        int n = s.size();
        // memset(dp, -1, sizeof dp);
        vector<string> subStrings;
        int maxSize = 0;
        string result = "";

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                subStrings.push_back(s.substr(i, j - i + 1));
            }
        }

        for (auto str : subStrings)
        {
            if (checkPalindrome(str) and str.size() > maxSize)
            {
                maxSize = str.size();
                result.clear();
                result = str;
            }
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/word-break/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution {
public:
    unordered_set<string> words;
    int n;
    int dp[1000];

    bool solve(int i, string &s) {
        if (i >= n)
            return true;
        
        if(dp[i] != -1) 
            return dp[i];

        for (int l = 1; l <= n; ++l) {
            string current = s.substr(i, l);
            if (words.find(current) != words.end() && solve(i + l, s))
                return dp[i] = true;
        }

        return dp[i] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.size();
        memset(dp, -1, sizeof dp);

        for (auto word : wordDict) {
            words.insert(word);
        }

        return solve(0, s);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
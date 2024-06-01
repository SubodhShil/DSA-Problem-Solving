/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/frog-jump/description/
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
    int n;
    unordered_map<int, int> stonePosition;
    int dp[2005][2005];

    bool isPossible(vector<int> &stones, int currentStoneIdx, int previousJump)
    {

        if (currentStoneIdx == n - 1)
            return true;

        bool result = false;

        if (dp[currentStoneIdx][previousJump] != -1)
            return dp[currentStoneIdx][previousJump];

        for (int nextJump = previousJump - 1; nextJump <= previousJump + 1; ++nextJump)
        {
            if (nextJump > 0)
            {
                int next_stone = stones[currentStoneIdx] + nextJump;

                if (stonePosition.count(next_stone))
                    result = result || isPossible(stones, stonePosition[next_stone], nextJump);
            }
        }

        return dp[currentStoneIdx][previousJump] = result;
    }

    bool canCross(vector<int> &stones)
    {

        n = stones.size();

        if (stones[1] != 1)
            return false;

        for (int i = 0; i < n; ++i)
            stonePosition[stones[i]] = i;

        memset(dp, -1, sizeof(dp));

        return isPossible(stones, 0, 0);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
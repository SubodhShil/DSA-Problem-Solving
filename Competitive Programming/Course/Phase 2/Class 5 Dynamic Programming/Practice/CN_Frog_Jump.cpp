/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.naukri.com/code360/problems/frog-jump_3621012
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

/*
    Time complexity: O()
    Space complexity:
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class top_down_solution
{
public:
    int minimum_energy(int index, vector<int> &dp, vector<int> &heights)
    {
        if (index == 0)
            return 0;

        if (dp[index] != -1)
            return dp[index];

        int oneStep = minimum_energy(index - 1, dp, heights) + abs(heights[index - 1] - heights[index]);

        int twoStep = INT32_MAX;
        if (index > 1)
            twoStep = minimum_energy(index - 2, dp, heights) + abs(heights[index - 2] - heights[index]);

        dp[index] = min(oneStep, twoStep);

        return dp[index];
    }

    int frogJump(int n, vector<int> &heights)
    {
        vector<int> dp(n + 1, -1);
        return minimum_energy(n - 1, dp, heights);
    }
};

class bottom_up_solution
{
public:
    int frogJump(int n, vector<int> &heights)
    {
        vector<int> dp(n + 1, 0);
        dp[0] = 0;

        for (int i = 1; i < n; ++i)
        {
            int fs = dp[i - 1] + abs(heights[i - 1] - heights[i]);
            int ls = INT32_MAX;
            if (i > 1)
                ls = dp[i - 2] + abs(heights[i - 2] - heights[i]);

            dp[i] = min(fs, ls);
        }

        return dp[n - 1];
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
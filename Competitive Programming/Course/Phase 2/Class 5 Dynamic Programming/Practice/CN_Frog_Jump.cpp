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

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
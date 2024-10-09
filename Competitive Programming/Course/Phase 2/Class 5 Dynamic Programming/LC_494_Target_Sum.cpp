/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/target-sum/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    int countWays(int i, vector<int> &nums, int target, int currentSum)
    {
        if (i >= nums.size())
        {
            // returning the ways count
            if (currentSum == target)
                return 1;
            else
                return 0;
        }

        int way1 = countWays(i + 1, nums, target, currentSum + nums[i]);
        int way2 = countWays(i + 1, nums, target, currentSum - nums[i]);

        return way1 + way2;
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        return countWays(0, nums, target, 0);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
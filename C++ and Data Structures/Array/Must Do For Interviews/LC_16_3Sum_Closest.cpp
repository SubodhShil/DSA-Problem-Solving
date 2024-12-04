/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/3sum-closest/
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
    int threeSumClosest(vector<int> &nums, int target)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        int minDiff = INT32_MAX;

        for (int i = 0; i < n - 2; ++i)
        {
            int l = i + 1, r = n - 1;

            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == target)
                    return target;
                else if (sum < target)
                    ++l;
                else
                    --r;

                int diff = abs(target - sum);
                if (diff < minDiff)
                {
                    minDiff = diff;
                    ans = sum;
                }
            }
        }

        return ans;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
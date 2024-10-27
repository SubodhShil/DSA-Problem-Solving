/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
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
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        // element -> index

        /// Q: will there be duplicate occurrences of an element?
        unordered_map<int, set<int>> ump;
        for (int i = 0; i < n; ++i)
        {
            ump[nums[i]].insert(i);
        }

        for (int i = 0; i < n; ++i)
        {
            int remain = target - nums[i];

            if (ump.count(remain))
            {
                for (auto x : ump[remain])
                {
                    if (x > i)
                        return {i + 1, x + 1};
                }
            }
        }

        return {0, 0};
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}

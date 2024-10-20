/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/continuous-subarray-sum/description/
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
    /// TLE Code
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> partialSumArray(n + 1, 0);
        for (int i = 1; i < n + 1; ++i)
        {
            partialSumArray[i] = nums[i - 1] + partialSumArray[i - 1];
        }

        /* for (int i = 1; i <= n; ++i) {
            cout << partialSumArray[i] << ' ';
        } */

        for (int i = 2; i <= n; ++i)
        {
            for (int j = i; j <= n; ++j)
            {
                int ele = partialSumArray[j] - partialSumArray[j - i];
                if (ele % k == 0)
                    return true;
            }
        }

        return false;
    }
};

class Solution2
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> ump;
        ump[0] = -1;
        int n = nums.size(), sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
            int remainder = sum % k;

            if (ump.count(remainder))
            {
                if (i - ump[remainder] >= 2)
                    return true;
            }
            else
                ump[remainder] = i;
        }

        return false;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Solution sol;
    vector<int> v{23, 2, 4, 6, 7};
    sol.checkSubarraySum(v, 6);

    return 0;
}
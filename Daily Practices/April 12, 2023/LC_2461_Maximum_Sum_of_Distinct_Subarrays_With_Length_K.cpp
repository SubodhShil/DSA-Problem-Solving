/**
 * @file LC_2461_Maximum_Sum_of_Distinct_Subarrays_With_Length_K.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-12
 * @problem_source: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/
 * @tutorial: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/solutions/2783127/c-solution-using-map-very-simple-and-easy-to-understand/?orderBy=most_votes
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        int size = nums.size();

        /// edge case
        if (k > size || size == 0)
            return 0;

        unordered_map<int, int> mp;
        int i = 0;
        long long sum = 0, ans = 0;

        while (i < k && i < nums.size())
        {
            mp[nums[i]]++;
            /// compute the sum according to window size
            sum += nums[i++];
        }

        /// as per question, the window size must be 'k' (not less or more)
        /// and each element can't have frequency more than 1
        if (mp.size() == k)
            ans = sum;

        while (i < nums.size())
        {
            /// add new element to the hashtable
            mp[nums[i]]++;
            /// delete the old element from hashtable
            mp[nums[i - k]]--;

            if (mp[nums[i - k]] == 0)
                mp.erase(nums[i - k]);

            sum += nums[i];
            /// delete the old element
            sum -= nums[i - k];

            if (mp.size() == k)
            {
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> v{1, 5, 4, 2, 9, 9, 9};
    cout << sol.maximumSubarraySum(v, 3) << endl;

    return 0;
}
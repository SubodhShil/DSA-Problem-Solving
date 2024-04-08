/**
 * @brief
 * @author      Subodh Chandra Shil
 * @source:     https://leetcode.com/problems/most-frequent-even-element/
 * @date:       3/25/2023
 * @algorithm:  hashing
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        int frequency = 0;
        int value = INT_MAX;

        /// @dev unordered_map has taken for reducing T.C from O(N) to O(1)
        unordered_map<int, int> hashing;
        for (auto &i : nums)
        {
            /// @check:     whether current element is even
            /// @intuition: filter out only even numbers at the time of hashing
            /// @concept:   check even using bit manipulation
            ///             i % 2 == 0 is same as !(i & 1) or (i & 1) == 0
            if (!(i & 1))
            {
                /// storing frequency in the hashing
                hashing[i]++;

                if (hashing[i] > frequency || (hashing[i] == frequency && i < value))
                {
                    value = i;
                    frequency = hashing[i];
                }
            }
        }

        return (frequency == 0) ? -1 : value;
    }
};

int main()
{
    /// test cases
    // vector<int> nums = {0, 1, 2, 2, 4, 4, 1};
    // vector<int> nums = {4, 4, 4, 9, 2, 4};
    vector<int> nums = {29, 47, 21, 41, 13, 37, 25, 7};
    Solution op1;
    cout << op1.mostFrequentEven(nums);

    return 0;
}

/**
 * @Other-solutions: https://leetcode.com/problems/most-frequent-even-element/solutions/2560040/c-using-map-very-simple-and-easy-to-understand/?orderBy=most_votes
 */
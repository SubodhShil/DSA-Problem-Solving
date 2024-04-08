/**
 * @file        LC_2149_Rearrange_Array_Elements_by_Sign.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-30
 * @resources:  https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution 1
class Solution1
{
public:
    /// Time complexity: 2 * O(N)
    /// Space complexity: 2 * O(N)
    vector<int> rearrangeArray(vector<int> &nums)
    {
        queue<int> positives;
        queue<int> negatives;

        for (auto i : nums)
        {
            if (i > 0)
                positives.push(i);
            else
                negatives.push(i);
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i % 2 == 0)
            {
                nums[i] = positives.front();
                positives.pop();
            }

            else
            {
                nums[i] = negatives.front();
                negatives.pop();
            }
        }

        return nums;
    }
};

/// Bruteforce solution 2
class Solution2
{
public:
    /// Time complexity: O(N) + O(N / 2)
    /// Space complexity: 2 * O(N)
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> positives, negatives;

        for (auto i : nums)
        {
            if (i > 0)
                positives.push_back(i);
            else
                negatives.push_back(i);
        }

        /// Odd number x 2 produces even number
        /// Even number x 2 also produces even number
        /// so, any number x 2 = even number
        for (int i = 0; i < size / 2; ++i)
        {
            nums[2 * i] = positives[i];
            nums[2 * i + 1] = negatives[i];
        }

        return nums;
    }
};

/// Better-Optimal solution
class Solution3
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans(size, 0);
        int posIndex = 0, negativeIndex = 1;

        for (int i = 0; i < size; ++i)
        {
            if (nums[i] > 0)
            {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
            else
            {
                ans[negativeIndex] = nums[i];
                negativeIndex += 2;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> result;
    // vector<int> input{3, 1, -2, -5, 2, -4};
    // vector<int> input{-1, 1};
    vector<int> input{-5, 4, -7, 2};

    Solution2 sol1;
    result = sol1.rearrangeArray(input);

    for (auto i : result)
        cout << i << " ";

    return 0;
}
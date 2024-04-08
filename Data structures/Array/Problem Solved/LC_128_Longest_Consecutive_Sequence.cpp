/**
 * @file            LC_128_Longest_Consecutive_Sequence.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-06-12
 * @resources:      https://leetcode.com/problems/longest-consecutive-sequence/description/
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
class Solution1
{
public:
    bool searchNext(vector<int> &arr, int target)
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            if (arr[i] == target)
                return true;
        }

        return false;
    }

    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        /// array must have one element so at worst
        /// largest sequence length is 1
        int largestSequence = 1;
        int size = nums.size();

        for (int i = 0; i < size; ++i)
        {
            int cnt = 1;
            int nextElement = nums[i] + 1;

            while (searchNext(nums, nextElement))
            {
                ++cnt;
                ++nextElement;
            }

            if (cnt > largestSequence)
                largestSequence = cnt;
        }

        return largestSequence;
    }
};

/// Better solution
class Solution2
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int size = nums.size();
        if (size == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int lastSmallest = INT32_MIN;
        int longestSequence = 1;
        int countCurrent = 0;
        for (int i = 0; i < size; ++i)
        {
            if (nums[i] - 1 == lastSmallest)
                ++countCurrent;
            else if (nums[i] > lastSmallest)
                countCurrent = 1;

            lastSmallest = nums[i];
            longestSequence = max(countCurrent, longestSequence);
        }

        return longestSequence;
    }
};

/// Optimal solution
class Solution3
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int size = nums.size();
        if (size == 0)
            return 0;

        int longestSequence = 1;
        unordered_set<int> st;

        for (auto i : nums)
        {
            st.insert(i);
        }

        for (auto it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int cnt = 1;
                int currentElement = it;

                while (st.find(currentElement + 1) != st.end())
                {
                    ++currentElement;
                    ++cnt;
                }

                longestSequence = max(longestSequence, cnt);
            }
        }

        return longestSequence;
    }
};

int main()
{
    return 0;
}
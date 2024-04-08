/**
 * @file 78_Subsets.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-11
 * @problem_source: https://leetcode.com/problems/subsets/submissions/845706273/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        //^ base case
        if (index >= nums.size())
        {
            //* storing results
            ans.push_back(output);
            return;
        }

        //* exclude
        solve(nums, output, index + 1, ans);

        //* include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }

    //* Backtracking approach
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        solve(nums, output, index, ans);

        return ans;
    }
};
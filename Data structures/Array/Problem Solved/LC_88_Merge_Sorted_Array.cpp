/**
 * @file LC_88_Merge_Sorted_Array.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-07
 * @problem_source: https://leetcode.com/problems/merge-sorted-array/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        for (auto i : nums1)
            cout << i << " ";
    }
};

int main()
{
    Solution sol;
    // vector<int> nums1{1, 2, 3, 0, 0, 0}, nums2{2, 5, 6};
    // vector<int> nums1{0}, nums2{1};
    vector<int> nums1{1}, nums2{0};
    sol.merge(nums1, 1, nums2, 0);

    return 0;
}
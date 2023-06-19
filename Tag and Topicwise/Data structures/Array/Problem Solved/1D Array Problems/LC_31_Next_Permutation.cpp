/**
 * @file        1_LC_31_Next_Permutation.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-02
 * @source:     https://youtu.be/JDOXKqF60RQ
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /// the bruteforce solution for this problem will take O(N * N!)
    /// C++ next_permutation() function can generate the result for this problem
    void nextPermutation(vector<int> &nums)
    {
        /// intuition

        /// longer prefix match
        int index = -1;
        int size = nums.size();
        for (int i = size - 2; i >= 0; --i)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        else
        {
            for (int i = size - 1; i > index; --i)
            {
                if (nums[i] > nums[index])
                {
                    swap(nums[i], nums[index]);
                    break;
                }
            }

            reverse(nums.begin() + index + 1, nums.end());
        }
    }
};

int main()
{

    return 0;
}
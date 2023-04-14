/**
 * @file LC_189_Rotate_Array.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-13
 * @question_link: https://leetcode.com/problems/rotate-array/
 * @study_link: https://youtu.be/Z7_nMTHROZo
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        /// we need to move an element 'k' step right
        /// so, arr[i] would be positioned at arr[i + k]
        /// but, if the array size overflows then we have to cyclic rotate the array.
        /// To do this, we have to restore from 0-th index. So, if (i + k) doesn't exist
        /// in the array, then we will mod it with 'n' (size of array). This will start
        /// positioning from 0-th index.
        /// The formula to do the task, arr[(i + k) % n]
        int size = nums.size();
        vector<int> extraArr(size);

        for (int i = 0; i < size; i++)
        {
            extraArr[(i + k) % size] = nums[i];
        }

        nums = extraArr;
    }
};

int main()
{
    Solution sol;
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    sol.rotate(v, 2);

    return 0;
}
/**
 * @file        LC_1752_Check_if_Array_Is_Sorted_and_Rotated.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-14
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        /// for a rotated sorted array
        /// the array can be imagined as two sorted pair
        /// if there is more than one pair then it must not fulfill the condition
        /// hence 'false', otherwise if array has a pair only result is 'true'
        /// if the array is sorted it is also a 'true' answer
        int size = nums.size();
        int count = 0;

        /// count pairs
        for (int i = 1; i < size; i++)
        {
            /// rotated sorted array        -> 1 pair
            /// zero rotation sorted array  -> 0 pair
            /// hence, more than 1 pair is false
            if (count > 1)
                return false;

            if (nums[i - 1] > nums[i])
                count++;
        }

        if (nums[size - 1] > nums[0])
            count++;

        return (count <= 1) ? true : false;
    }
};

int main()
{
    Solution sol;
    // vector<int> v{5, 1, 2, 3, 4};
    // vector<int> v{3, 4, 5, 1, 2};
    vector<int> v{1, 2, 1, 1};
    cout << sol.check(v) << endl;

    return 0;
}
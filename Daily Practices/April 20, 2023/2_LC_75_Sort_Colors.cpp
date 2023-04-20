/**
 * @file        2_LC_75_Sort_Colors.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-20
 * @resource:   https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
 *              https://leetcode.com/problems/sort-colors/description/
 */

#include <bits/stdc++.h>
using namespace std;

/// Most bruteforce solution
class Solution1
{
public:
    void sortColors(vector<int> &nums)
    {
        vector<int> red, white, blue;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
                red.push_back(nums[i]);
            else if (nums[i] == 1)
                white.push_back(nums[i]);
            else
                blue.push_back(nums[i]);
        }

        /// empty the vector array
        nums.clear();

        for (auto i : red)
            nums.push_back(i);

        for (auto i : white)
            nums.push_back(i);

        for (auto i : blue)
            nums.push_back(i);
    }
};

/// pre-computation and couting
class Solution2
{
public:
    void sortColors(vector<int> &nums)
    {
        /// counting the frequency using pre-computing hashing
        unordered_map<int, int> mp;
        for (auto i : nums)
            mp[i]++;

        int i = 0;
        /// replace elements with their count
        while (mp[0]--)
            nums[i++] = 0;

        while (mp[1]--)
            nums[i++] = 1;

        while (mp[2]--)
            nums[i++] = 2;
    }
};

/// @resource: https://youtu.be/R6HoR6NyMOA
/// @algorithm: Dutch flag algorithm
class Solution3
{
public:
    void sortColors(vector<int> &nums)
    {
        int size = nums.size();

        /// taking 3 index pointers
        int low = 0;
        int mid = 0;
        int high = size - 1;

        /*

                                We can have three conditions

        1. Encounters 0: swap(low, mid), increments low and mid pointers
        2. Encounters 1: just increments mid pointer
        3. Encounters 2: swap(mid, high), decrement high pointer

        */

        while (mid <= high)
        {
            if (nums[mid] == 0)
                swap(nums[mid++], nums[low++]);
            else if (nums[mid] == 1)
                mid++;
            else
                swap(nums[mid], nums[high--]);
        }
    }
};

void display(vector<int> &v)
{
    for (auto i : v)
        cout << i << ' ';

    cout << endl;
}

int main()
{
    // vector<int> nums{2, 0, 2, 1, 1, 0};
    // vector<int> nums{0, 2, 1, 2, 0};
    vector<int> nums{2, 0, 1};
    // vector<int> nums{1, 0, 1};
    // vector<int> nums{0, 1, 0};

    // Solution1 sol1;
    // sol1.sortColors(nums);

    Solution3 sol3;
    sol3.sortColors(nums);
    display(nums);

    return 0;
}
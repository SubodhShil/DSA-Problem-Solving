/**
 * @file        2_LC_75_Sort_Colors.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-20
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

class Solution3
{
public:
};

int main()
{
    // vector<int> nums{2, 0, 2, 1, 1, 0};
    // vector<int> nums{0, 2, 1, 2, 0};
    // vector<int> nums{2, 0, 1};
    vector<int> nums{1, 0, 1};
    // vector<int> nums{0, 1, 0};

    // Solution1 sol1;
    // sol1.sortColors(nums);

    return 0;
}
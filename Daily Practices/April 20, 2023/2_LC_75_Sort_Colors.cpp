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

        /// display
        for (auto i : nums)
            cout << i << " ";
    }
};

int main()
{
    // vector<int> nums{2, 0, 2, 1, 1, 0};
    vector<int> nums{2, 0, 1};
    Solution1 sol1;
    sol1.sortColors(nums);

    return 0;
}
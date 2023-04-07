#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> result(size);
        int left = 0, right = size - 1;

        for (int i = size - 1; i >= 0; i--)
        {
            if (abs(nums[left]) > abs(nums[right]))
                result[i] = nums[left] * nums[left++];
            else
                result[i] = nums[right] * nums[right--];
        }

        return result;
    }
};

int main()
{
    Solution sol;

    // vector<int> nums = {-4, -1, 0, 3, 10};
    // vector<int> nums = {-7, -3, 2, 3, 11};
    vector<int> nums = {1, 2};

    sol.sortedSquares(nums);

    return 0;
}
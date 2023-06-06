#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int non_duplicate_sum = 0;
        int result = 0;

        for (int i = 0; i < n; ++i)
        {
            non_duplicate_sum ^= nums[i];
        }

        return result;
    }
};

int main()
{

    return 0;
}
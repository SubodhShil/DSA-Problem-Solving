#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int l = 0, r = 0, n = nums.size(), res = INT32_MAX;
        long long sum = 0;
        for (; r < n; ++r)
        {
            sum += nums[r];

            for (; sum - nums[l] >= target; ++l)
            {
                sum -= nums[l];
            }

            if (sum >= target)
                res = min(res, r - l + 1);
        }

        return res == INT32_MAX ? 0 : res;
    }
};

int main()
{

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool windowInvalid(int cnt_zero)
    {
        return cnt_zero > 1;
    }

    int longestSubarray(vector<int> &nums)
    {
        int l = 0, r = 0, n = nums.size(), res = 0;
        int cnt_zero = 0;

        for (; r < n; ++r)
        {
            if (nums[r] == 0)
                ++cnt_zero;

            for (; windowInvalid(cnt_zero); ++l)
            {
                if (nums[l] == 0)
                    --cnt_zero;
            }

            res = max(res, r - l + 1);
        }

        return res - 1;
    }
};

int main()
{

    return 0;
}
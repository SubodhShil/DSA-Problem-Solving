#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int n = nums.size();
        long r = 0, l = 0, ans = 0;
        long long product = 1; // long long is an edge case

        for (; r < n; ++r)
        {
            product *= nums[r];
            for (; product >= k and l <= r; ++l) // l <= r is an edge case
            {
                product /= nums[l];
            }

            ans += (r - l + 1);
        }

        return ans;
    }
};

int main()
{

    return 0;
}
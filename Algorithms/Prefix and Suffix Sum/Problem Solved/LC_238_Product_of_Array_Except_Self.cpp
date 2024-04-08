#include <bits/stdc++.h>
using namespace std;

/// Complexity: O(n)
/// Still not optimized
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size(), zeroCnt = 0, product_without_zero = 1;
        vector<int> result(n, 0);

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == 0)
            {
                ++zeroCnt;
                if (zeroCnt > 1)
                {
                    return result;
                }
            }
            else
                product_without_zero *= nums[i];
        }

        for (int i = 0; i < n; ++i)
        {
            int current_element = nums[i];
            if (zeroCnt)
            {
                if (current_element == 0)
                    result[i] = product_without_zero;
                else
                    result[i] = 0;
            }
            else
                result[i] = product_without_zero / nums[i];
        }

        return result;
    }
};

int main()
{

    return 0;
}
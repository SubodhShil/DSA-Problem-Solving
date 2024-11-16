/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/maximum-product-subarray/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int maxProduct = INT32_MIN;
        int leftProduct = 1;
        int rightProduct = 1;

        for (int i = 0; i < n; ++i)
        {
            // if any product gets 0
            if (!leftProduct)
                leftProduct = 1;
            if (!rightProduct)
                rightProduct = 1;

            leftProduct *= nums[i];
            rightProduct *= nums[n - 1 - i];

            maxProduct = max(maxProduct, max(leftProduct, rightProduct));
        }

        return maxProduct;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
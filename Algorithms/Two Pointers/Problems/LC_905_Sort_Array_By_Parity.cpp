/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/sort-array-by-parity/
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
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int n = nums.size(), i = 0, j = n - 1;
        while (i < j)
        {
            if (nums[i] & 1 && !(nums[j] & 1))
            {
                swap(nums[i], nums[j]);
                ++i, --j;
            }
            else
            {
                if (nums[i] % 2 == 0)
                    ++i;
                if (nums[j] & 1)
                    --j;
            }
        }

        return nums;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x
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
    int specialArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = n; i >= 1; --i)
        {
            int lower_i = lower_bound(nums.begin(), nums.end(), i) - nums.begin();
            if (n - lower_i == i)
                return i;
        }

        return -1;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
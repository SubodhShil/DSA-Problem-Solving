/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/frequency-of-the-most-frequent-element/
    * Author: Subodh Chandra Shil
    * Tag: Sliding Window

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        vector<int> v = nums;
        sort(v.begin(), v.end());

        long long l = 0, r = 0, res = 0, current_sum = 0, n = nums.size();
        for (; r < n; ++r)
        {
            current_sum += v[r];
            for (; v[r] * (r - l + 1) > current_sum + k; ++l)
            {
                current_sum -= v[l];
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};

int32_t main()
{
    int t;
    cin >> t;

    return 0;
}
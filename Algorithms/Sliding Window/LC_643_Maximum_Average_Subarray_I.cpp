/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/maximum-average-subarray-i/description/
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
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size();
        int r = 0, l = 0;
        double maxAvg = (INT64_MIN * 1.0);
        long long current_sum = 0;

        for (; r < n; ++r)
        {
            for (; r - l + 1 > k; ++l)
            {
                double current_avg = (current_sum * 1.0) / k;
                maxAvg = max(maxAvg, current_avg);
                current_sum -= nums[l];
            }

            current_sum += nums[r];
        }

        maxAvg = max(maxAvg, (current_sum * 1.0) / k);

        return maxAvg;
    }
};

int32_t main()
{

    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
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
    bool valid(vector<int> arr, int days, int limit)
    {
        int current_day = 1, weight = 0;
        for (auto i : arr)
        {
            /// if weight crossing the limit value than move it to the next day
            if (weight + i > limit)
            {
                ++current_day;
                weight = i;
                if (current_day > days)
                    return false;
            }
            else
                weight += i;
        }

        return true;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        /// figure out the range
        int n = weights.size();
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);
        int ans = 0;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (valid(weights, days, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)

        return 0;
}
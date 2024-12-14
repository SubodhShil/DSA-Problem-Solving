/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/search-insert-position/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution1
{
public:
    int searchInsert(vector<int> &arr, int target)
    {

        if (target < arr[0])
            return 0;

        int n = arr.size();
        int low = 0, high = n - 1;
        int res = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                res = mid + 1, low = mid + 1;
            else
                high = mid - 1;
        }

        return (res == -1) ? n : res;
    }
};

class Solution2
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int start = 0, end = n - 1;
        int ans = n;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] >= target)
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

class Solution3
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        auto res = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return res;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
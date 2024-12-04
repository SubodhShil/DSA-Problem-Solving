/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/sort-array-by-parity-ii/
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
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result;
        queue<int> evens, odds;

        for (auto x : nums)
        {
            if (x & 1)
                odds.push(x);
            else
                evens.push(x);
        }

        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                result.push_back(odds.front());
                odds.pop();
            }
            else
            {
                result.push_back(evens.front());
                evens.pop();
            }
        }

        return result;
    }
};

/* Inner while loop solution */
class Solution2
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int n = nums.size(), i = 0, j = n - 1;

        // using while loop track which both mismatch occurs and swap!!
        while (1)
        {
            while (i < n and nums[i] % 2 == 0)
                i += 2;
            while (j >= 0 and nums[j] % 2 == 1)
                j -= 2;
            if (i >= n or j < 0)
                break;
            swap(nums[i], nums[j]);
        }

        return nums;
    }
};

/* Optimized two pointers solution */

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 0, j = 1; i < n and j < n;)
        {
            if (arr[j] & 1)
                j += 2;
            else if (!(arr[i] & 1))
                i += 2;
            else
                swap(arr[i], arr[j]);
        }

        return arr;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
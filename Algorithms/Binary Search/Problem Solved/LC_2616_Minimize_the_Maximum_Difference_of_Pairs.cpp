/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs/description/
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
    int n;
    vector<int> arr;

    bool isValid(vector<int> &arr, int p, int diff)
    {
        int countPairs = 0;
        int i = 0;
        while (i < n - 1)
        {
            if (abs(arr[i] - arr[i + 1]) <= diff)
            {
                ++countPairs;
                i += 2;
            }
            else
                ++i;
        }

        return countPairs >= p;
    }

    int minimizeMax(vector<int> &nums, int p)
    {
        arr = nums;
        n = arr.size();
        int result = 0;
        sort(arr.begin(), arr.end());

        int l = 0, r = arr[n - 1] - arr[0];

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isValid(arr, p, mid))
            {
                result = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
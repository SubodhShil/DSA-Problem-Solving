/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
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
    bool isGood(vector<int> &arr, int current, int d)
    {
        int start = 0, end = arr.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (abs(current - arr[mid]) <= d)
                return false;
            else if (arr[mid] > current)
                end = mid - 1;
            else
                start = mid + 1;
        }

        return true;
    }

    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        sort(arr2.begin(), arr2.end());
        int res = 0;
        for (auto x : arr1)
        {
            res += (isGood(arr2, x, d)) ? 1 : 0;
        }

        return res;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
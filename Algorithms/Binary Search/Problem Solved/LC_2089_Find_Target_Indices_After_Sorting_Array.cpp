/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/find-target-indices-after-sorting-array/
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
    vector<int> targetIndices(vector<int> &arr, int target)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> result;

        int start = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        if (start == n)
            return result;

        int end = upper_bound(arr.begin(), arr.end(), target) - arr.begin();

        for (int i = start; i < end; ++i)
        {
            result.push_back(i);
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
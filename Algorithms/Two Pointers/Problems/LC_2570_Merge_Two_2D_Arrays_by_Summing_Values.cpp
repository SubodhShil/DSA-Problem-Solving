/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/
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
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        map<int, int> store;

        for (auto x : nums1)
            store[x[0]] += x[1];

        for (auto x : nums2)
            store[x[0]] += x[1];

        vector<vector<int>> result;

        for (auto &[first, second] : store)
        {
            result.push_back({first, second});
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
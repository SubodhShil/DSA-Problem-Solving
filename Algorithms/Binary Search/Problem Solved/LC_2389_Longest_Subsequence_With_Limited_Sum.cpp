/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/longest-subsequence-with-limited-sum/
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
    int findTarget(vector<int> &prefixSum, int target)
    {
        int n = prefixSum.size();
        int start = 0, end = n - 1, ans = 0;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (prefixSum[mid] <= target)
            {
                ans = max(ans, mid + 1);
                start = mid + 1;
            }
            else
                end = mid - 1;
        }

        return ans;
    }

    vector<int> answerQueries(vector<int> &arr, vector<int> &queries)
    {
        int n1 = arr.size(), n2 = queries.size();
        sort(arr.begin(), arr.end());
        vector<int> prefixSum(n1, 0), result(n2, 0);
        partial_sum(arr.begin(), arr.end(), prefixSum.begin());

        for (int i = 0; i < n2; ++i)
        {
            result[i] = findTarget(prefixSum, queries[i]);
        }

        return result;
    }
};

class Solution
{
public:
    vector<int> answerQueries(vector<int> &arr, vector<int> &queries)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        partial_sum(arr.begin(), arr.end(), arr.begin());
        vector<int> result;

        for (auto x : queries)
        {
            int idx = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
            result.push_back(idx);
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
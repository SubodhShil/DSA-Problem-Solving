/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1
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
    int solve(int A[], int idx, int diff)
    {
        if (idx < 0)
            return 0;

        int ans = 0;
        for (int i = idx - 1; i >= 0; --i)
        {
            if (abs(A[i] - A[idx]) == diff)
                ans = max(ans, 1 + solve(A, i, diff));
        }

        return ans;
    }

    int lengthOfLongestAP(int A[], int n)
    {
        if (n <= 2)
            return n;

        int res = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                res = max(res, 2 + solve(A, i, abs(A[i] - A[j])));
            }
        }

        return res;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
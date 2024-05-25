/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/maximum-number-of-removable-characters/description/
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
    string str, subseq;

    bool isSubsequence(string real, string dummy)
    {
        int n = real.size(), m = dummy.size(), i = 0, j = 0;
        for (; i < n and j < m; ++i)
        {
            if (real[i] == dummy[j])
                ++j;
        }

        return j >= m;
    }

    bool isValid(string subseq, int k, vector<int> removable)
    {
        string temp = "";
        for (int i = 0; i < k; ++i)
        {
            str[removable[i]] = '*';
        }

        for (auto s : str)
            if (s != '*')
                temp += s;

        return isSubsequence(temp, subseq);
    }

    int maximumRemovals(string s, string p, vector<int> &removable)
    {
        int n = removable.size();
        int l = 1, r = n;
        int ans = 0;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            str = s, subseq = p;
            if (isValid(subseq, mid, removable))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        return ans;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    return 0;
}
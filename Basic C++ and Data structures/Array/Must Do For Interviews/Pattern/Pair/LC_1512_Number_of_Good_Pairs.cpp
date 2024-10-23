/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/number-of-good-pairs/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int cnt = 0;

        unordered_map<int, int> counter;
        for (auto i : nums)
            cnt += counter[i]++;

        return cnt;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
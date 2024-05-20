/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/
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
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {

        int n = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> result;

        for (auto i : spells)
        {
            long long atleast_value = ceil(success * 1.0 / i);
            int idx_of_atleast_value = lower_bound(potions.begin(), potions.end(), atleast_value) - potions.begin();
            int total = n - idx_of_atleast_value;

            result.push_back(total);
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
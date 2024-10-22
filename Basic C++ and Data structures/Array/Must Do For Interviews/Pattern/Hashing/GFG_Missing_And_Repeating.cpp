/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?
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
    vector<int> findTwoElement(vector<int> &arr)
    {
        unordered_map<int, int> ump;
        int n = arr.size();

        int rep = -1, missing = -1;
        for (auto i : arr)
        {
            ump[i]++;
        }

        for (int i = 1; i <= n; ++i)
        {
            if (ump.count(i) == 0)
                missing = i;
            else if (ump[i] == 2)
                rep = i;
        }

        return {rep, missing};
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
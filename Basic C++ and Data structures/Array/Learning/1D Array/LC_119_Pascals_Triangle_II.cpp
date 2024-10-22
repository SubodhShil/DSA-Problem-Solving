/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/pascals-triangle-ii/description/
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
    vector<vector<int>> pascals;

    void generate()
    {
        for (int i = 0; i <= 33; ++i)
        {
            vector<int> internalElements(i + 1, 1);
            for (int j = 1; j < i; ++j)
            {
                internalElements[j] = pascals[i - 1][j - 1] + pascals[i - 1][j];
            }
            pascals.push_back(internalElements);
        }
    }

    vector<int> getRow(int rowIndex)
    {
        generate();
        return pascals[rowIndex];
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
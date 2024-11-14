/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/can-place-flowers/
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
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int cnt = n, sz = flowerbed.size();

        for (int i = 0; i < sz; ++i)
        {
            if (!flowerbed[i] &&
                ((i == 0) or (i - 1 >= 0 && !flowerbed[i - 1])) &&
                ((i == sz - 1) or (i + 1 <= sz - 1 && !flowerbed[i + 1])))
                flowerbed[i] = 1, --cnt;
        }

        return cnt > 0 ? false : true;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/count-good-triplets/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c)
    {
        int n = arr.size();
        int cnt = 0;

        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                if (abs(arr[i] - arr[j]) <= a)
                {
                    for (int k = j + 1; k < n; ++k)
                    {
                        if (abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c)
                            ++cnt;
                    }
                }
            }
        }

        return cnt;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
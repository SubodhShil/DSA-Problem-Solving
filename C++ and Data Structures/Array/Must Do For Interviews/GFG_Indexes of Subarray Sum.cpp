/*
                            ॐ JAY JAY SRI RAM ॐ

    *
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
    vector<int> subarraySum(vector<int> &arr, int target)
    {
        int sum = 0, n = arr.size();
        vector<int> result;

        // starting index
        for (int start = 0; start < n; ++start)
        {
            sum = 0;
            for (int end = start; end < n; ++end)
            {
                sum += arr[end];

                if (sum == target)
                {
                    return {start + 1, end + 1};
                }
                else if (sum > target)
                {
                    break;
                }
            }
        }

        if (result.size() == 0)
            return {-1};
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}
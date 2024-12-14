/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?
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
    vector<int> getFloorAndCeil(int x, vector<int> &arr)
    {

        sort(arr.begin(), arr.end());
        int n = arr.size();

        int low = 0, high = n - 1;
        vector<int> res(2);
        res[0] = res[1] = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x)
                return {arr[mid], arr[mid]};
            else if (arr[mid] > x)
            {
                res[1] = arr[mid];
                high = mid - 1;
            }
            else if (arr[mid] < x)
            {
                res[0] = arr[mid];
                low = mid + 1;
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
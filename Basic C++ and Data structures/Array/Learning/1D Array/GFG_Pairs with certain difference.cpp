/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1?
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
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        int sum = 0;
        sort(arr, arr + N);

        // we have to minimize the difference, it can be ensured if we have the
        // difference of two biggest element of the array

        for (int i = N - 1; i > 0; --i)
        {
            if (arr[i] - arr[i - 1] < K)
                sum += arr[i] + arr[i - 1], --i;
        }

        return sum;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
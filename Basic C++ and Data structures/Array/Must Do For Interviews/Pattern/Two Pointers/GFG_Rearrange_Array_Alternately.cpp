/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1?
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void rearrange(long long *arr, int n)
{
    long long extra[n];
    for (int i = 0; i < n; i++)
        extra[i] = arr[i];

    sort(extra, extra + n, greater<int>());

    int i = 0, j = n - 1, k = 0;
    while (i <= j)
    {
        if (i == j)
            arr[k] = extra[i], ++k;
        else
            arr[k] = extra[i], arr[k + 1] = extra[j], k += 2;

        ++i, --j;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long arr[] = {1, 2, 3, 4, 5, 6, 7};
    rearrange(arr, 7);

    return 0;
}
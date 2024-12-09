/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
    * Author: Subodh Chandra Shil
    * Pattern: Merge sort

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
    int cnt = 0;

    void conquer(vector<int> &merged, vector<int> &arr, int low, int mid, int high)
    {
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
                merged.push_back(arr[left++]);
            else
                cnt += mid - left + 1, merged.push_back(arr[right++]);
        }

        while (left <= mid)
        {
            merged.push_back(arr[left++]);
        }

        while (right <= high)
        {
            merged.push_back(arr[right++]);
        }
    }

    void divide(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;
        divide(arr, low, mid);
        divide(arr, mid + 1, high);
        vector<int> merged;
        conquer(merged, arr, low, mid, high);

        for (int i = low, k = 0; i <= high; ++i)
        {
            arr[i] = merged[k++];
        }
    }

    int inversionCount(vector<int> &arr)
    {
        int n = arr.size();
        divide(arr, 0, n - 1);

        return cnt;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
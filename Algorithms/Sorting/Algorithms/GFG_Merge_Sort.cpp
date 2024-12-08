/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/merge-sort/1?
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
    void merge(vector<int> &merged, vector<int> &arr, int low, int mid, int high)
    {
        int left = low;
        int right = mid + 1;

        while (1)
        {
            if (left <= mid && (right > high || arr[left] <= arr[right]))
                merged.push_back(arr[left++]);
            else if (right <= high)
                merged.push_back(arr[right++]);
            else
                break;
        }
    }

    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
        {
            return;
        }

        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);      // left part sort
        mergeSort(arr, mid + 1, high); // right part sort

        vector<int> merged;
        merge(merged, arr, low, mid, high);

        int k = 0;
        for (int i = low; i <= high; ++i)
        {
            arr[i] = merged[k++];
        }
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void mergeArraysAscending(vector<int> &arr, vector<int> &merged, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;

    while (i <= mid and j <= end)
    {
        if (arr[i] < arr[j])
            merged.push_back(arr[i++]);
        else
            merged.push_back(arr[j++]);
    }

    /// check and fill up any remaining element not added to the new array
    while (i <= mid)
        merged.push_back(arr[i++]);
    while (j <= end)
        merged.push_back(arr[j++]);
}

void mergeArraysDescending(vector<int> &arr, vector<int> &merged, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;

    while (i <= mid and j <= end)
    {
        if (arr[i] > arr[j])
            merged.push_back(arr[i++]);
        else
            merged.push_back(arr[j++]);
    }

    /// check and fill up any remaining element not added to the new array
    while (i <= mid)
        merged.push_back(arr[i++]);
    while (j <= end)
        merged.push_back(arr[j++]);
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        vector<int> merged;
        // mergeArraysAscending(arr, merged, start, mid, end);
        mergeArraysDescending(arr, merged, start, mid, end);

        // Copy the merged array back to the original array
        int k = 0;
        for (int i = start; i <= end; ++i)
        {
            arr[i] = merged[k++];
        }
    }
}

int main()
{
    // vector<int> v{6, 5, 3, 1, 8, 7, 2, 4};
    vector<int> v{33, 1, 2, 7, 5, 22, 10, 15, 3};
    mergeSort(v, 0, v.size() - 1);

    cout << "After merge sort: ";
    for (auto &i : v)
        cout << i << " ";

    return 0;
}
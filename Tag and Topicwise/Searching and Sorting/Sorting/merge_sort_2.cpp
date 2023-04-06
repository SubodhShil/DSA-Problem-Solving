#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &arr, vector<int> &merged, int start, int mid, int end)
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
    if (i >= mid)
        while (j <= end)
            merged.push_back(arr[j]);
    else
        while (i <= mid)
            merged.push_back(arr[i]);
}

void mergeSortRecursive(vector<int> &arr, int start, int end)
{
    //* base case
    // if(start == end)
    //^ we can avoid the base by a condition check
    vector<int> merged;
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSortRecursive(arr, start, mid);
        mergeSortRecursive(arr, end + 1, end);

        //* create an extra array for sorted merged array
        mergeArrays(arr, merged, start, mid, end);
    }

    arr.clear();
    arr = merged;
}

int main()
{
    vector<int> v{6, 5, 3, 1, 8, 7, 2, 4};
    mergeSortRecursive(v, 0, v.size() - 1);

    cout << "After merge sort: ";
    for (auto &i : v)
        cout << i << " ";

    return 0;
}
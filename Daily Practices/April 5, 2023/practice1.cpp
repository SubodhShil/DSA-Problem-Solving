/**
 * @file practice1.cpp
 * @author
 * @topic: Merge sort (Striver)
 * @date 2023-04-05
 * @study_source:
 */

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    /// simulate two arrays
    /// [1] => {left, mid}
    /// [2] => {mid + 1, right}
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    /// remaining array needs to be enlist
    while (left <= mid)
        temp.push_back(arr[left++]);
    while (right <= high)
        temp.push_back(arr[right++]);

    /// place 'temp' array elements to the actual array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void divide_and_conquer(vector<int> &arr, int low, int high)
{
    /// The algorithm should work if and only, the array itself or any of it's subarray contains atleast 2 or more elements

    if (low == high)
        return;

    int mid = low + (high - low) / 2;

    divide_and_conquer(arr, low, mid);
    divide_and_conquer(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n)
{
    divide_and_conquer(arr, 0, n - 1);
}

int main()
{
    vector<int> v{6, 5, 3, 1, 8, 7, 2, 4};
    mergeSort(v, v.size());

    for (auto i : v)
        cout << i << ' ';

    return 0;
}
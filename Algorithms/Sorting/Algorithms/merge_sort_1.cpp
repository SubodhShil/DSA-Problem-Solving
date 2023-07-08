#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //* making arrays for copying values
    vector<int> first(len1), second(len2);

    //* copy values
    int k = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    //* merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];
        else
            arr[mainArrayIndex++] = second[index2++];
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    //* base case
    // if (start >= end)
    //     return;

    if (start < end)
    {
        int mid = start + (end - start) / 2;

        //^ divide phase
        //* divided left part
        mergeSort(arr, start, mid);

        //* divided right part
        mergeSort(arr, mid + 1, end);

        //^ Conquer
        merge(arr, start, end);
    }
}

int main()
{
    // vector<int> v{2, 5, 1, 6, 9};
    vector<int> v{-77, -5, 55, 9953, 55, 3, 12, 0, 72};

    int size = v.size();
    mergeSort(v, 0, size - 1);

    for (auto &i : v)
        cout << i << " ";

    return 0;
}
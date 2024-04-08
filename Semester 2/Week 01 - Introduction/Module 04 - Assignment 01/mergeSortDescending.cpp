#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void merge(int left, int right, int mid)
{
    vector<int> leftArray;
    vector<int> rightArray;

    for (int i = left; i <= mid; ++i)
        leftArray.push_back(arr[i]);
    leftArray.push_back(INT32_MIN);

    for (int i = mid + 1; i <= right; ++i)
        rightArray.push_back(arr[i]);
    rightArray.push_back(INT32_MIN);

    /// compare and sort
    int leftP = 0, rightP = 0;
    for (int i = left; i <= right; ++i)
    {
        if (leftArray[leftP] >= rightArray[rightP])
        {
            arr[i] = leftArray[leftP];
            ++leftP;
        }
        else
        {
            arr[i] = rightArray[rightP];
            ++rightP;
        }
    }
}

void mergeSort(int left, int right)
{
    if (left == right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);

    merge(left, right, mid);
}

int main()
{
    int n;
    cin >> n;

    /// taking array input
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    mergeSort(0, arr.size() - 1);

    /// after merge sort
    for (auto i : arr)
        cout << i << " ";

    return 0;
}
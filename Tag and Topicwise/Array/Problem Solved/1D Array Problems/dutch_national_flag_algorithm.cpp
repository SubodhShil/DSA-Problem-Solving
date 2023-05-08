#include <bits/stdc++.h>
using namespace std;

/*
    Algorithm:
    We will use three pointers - low, mid, high and will keep 4 invariants.
    Declare these three pointer, low, mid and high
    - low and mid pointer will take place at index 0
    - high will take place at last index of the array

    Start traversing from the left (0 index) of the array.

    1)  if 0, swap arr[low] and arr[mid], low++, mid++
    2)  if 1, mid++
    3)  if 2, swap arr[mid] and arr[high], high--
 */

void dnfSort(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    /// array is sorted if mid and high are at the same place
    while (mid <= high)
    {
        if (arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
    }

    for (auto i : arr)
        cout << i << ' ';
}

int main()
{
    vector<int> v{1, 2, 0, 2, 1, 2, 0, 1, 2, 0, 1};
    dnfSort(v);

    return 0;
}
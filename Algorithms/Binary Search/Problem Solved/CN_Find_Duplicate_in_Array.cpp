#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == arr[mid - 1])
            return arr[mid];
        else if (arr[mid] > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(vector<int> &arr, int start, int end, int search_key)
{
    int mid = start + (end - start) / 2;
    if (start <= end)
    {
        if (arr[mid] == search_key)
            return mid;
        else if (search_key > arr[mid])
            return binarySearchRecursive(arr, mid + 1, end, search_key);

        else
            return binarySearchRecursive(arr, start, mid - 1, search_key);
    }
    return -1;
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60};
    cout << binarySearchRecursive(v, 0, v.size() - 1, 50);

    return 0;
}
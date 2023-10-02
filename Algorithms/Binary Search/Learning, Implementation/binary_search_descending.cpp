#include <bits/stdc++.h>
using namespace std;

vector<int> arr{55, 23, 21, 15, 17, 3, 2};
int binarySearchDescending()
{
    int start = 0, end = arr.size() - 1;
    int target = 21;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main()
{
    cout << binarySearchDescending();

    return 0;
}
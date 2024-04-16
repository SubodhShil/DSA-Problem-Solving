#include <bits/stdc++.h>
using namespace std;

int findElement(vector<int> arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int n, target;
    cin >> n;

    vector<int> arr;

    /// taking array input
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cin >> target;

    int index = findElement(arr, target);
    if (index == -1)
        cout << "Not Found\n";
    else
        cout << index << endl;

    return 0;
}
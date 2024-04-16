#include <bits/stdc++.h>
using namespace std;

bool isOccurrencePresent(vector<int> arr, int target)
{
    int count = 0;

    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (arr[mid + 1] == target || arr[mid - 1] == target)
            {
                count = 2;
                break;
            }
            else
            {
                count = 1;
                break;
            }
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (count == 1) ? false : true;
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

    bool result = isOccurrencePresent(arr, target);
    if (result)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
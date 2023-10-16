#include <bits/stdc++.h>
using namespace std;

// Actual implementation
int lowerBound(vector<int> arr, int n, int target)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
}

// lower bound library
int lowerBoundLib(vector<int> arr, int target)
{
    auto res = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    return res;
}

// Actual upper bound implementation
int upperBound(vector<int> &arr, int target, int n)
{

    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
}

int upperBoundLib(vector<int> arr, int target)
{
    auto res = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    return res;
}

int main()
{
    // vector<int> v{4, 6, 10, 12, 18, 20};
    // vector<int> v{33, 35, 44, 46, 51, 51, 51, 77, 80, 120, 133};
    vector<int> v{1, 2, 2, 3, 3, 3};
    cout << lowerBound(v, v.size(), 150) << endl;

    return 0;
}
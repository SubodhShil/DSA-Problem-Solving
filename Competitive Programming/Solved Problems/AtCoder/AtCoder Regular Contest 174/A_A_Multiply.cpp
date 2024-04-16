#include <bits/stdc++.h>
using namespace std;

#define int long long

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long maxSum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];

        if (sum < 0)
            sum = 0;

        else
            maxSum = max(maxSum, sum);
    }

    return maxSum < 0 ? 0 : maxSum;
}

long long minSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long minSum = INT64_MAX;

    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];

        if (sum >= 0)
            sum = 0;

        else
            minSum = min(minSum, sum);
    }

    return minSum >= 0 ? 0 : minSum;
}

int32_t main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int totalSum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    int maxVal = maxSubarraySum(arr, n), minVal = minSubarraySum(arr, n);

    // cout << totalSum << ' ' << maxVal << ' ' << minVal << endl;

    if (maxVal >= 0 and minVal <= 0 and m > 0)
        cout << (totalSum - maxVal) + (maxVal * m) << endl;
    else
        cout << (totalSum - minVal) + (minVal * m) << endl;

    return 0;
}
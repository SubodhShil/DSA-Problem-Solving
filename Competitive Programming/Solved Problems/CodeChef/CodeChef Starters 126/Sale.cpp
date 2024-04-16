#include <bits/stdc++.h>
using namespace std;

#define int long long

void ans()
{
    int n;
    cin >> n;

    int arr[n]{0};
    int totalSum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    // cout << totalSum << endl;
    int maxRes = INT64_MIN;

    int prev = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int x = prev + arr[i] * 2;
        if (x > totalSum - (prev + arr[i]))
            maxRes = max(maxRes, x);

        prev += arr[i];
    }

    maxRes = max(maxRes, prev + arr[n - 1] * 2);
    cout << maxRes << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
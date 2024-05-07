#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    long long sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        int x = (arr[i] * i);
        int y = (n - 1 - i) * arr[i];
        sum += (x - y);
    }

    cout << sum << endl;

    return 0;
}

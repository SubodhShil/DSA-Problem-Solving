#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int size = n + 1;
    vector<long long> arr(size, 0);

    for (int i = 1; i < size; ++i)
    {
        cin >> arr[i];
    }

    /// using prefix sum algorithm
    for (int i = 2; i < size; ++i)
    {
        arr[i] = arr[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long sum = arr[r] - arr[l - 1];

        cout << sum << endl;
    }

    return 0;
}
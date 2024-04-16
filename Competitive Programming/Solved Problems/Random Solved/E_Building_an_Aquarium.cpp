/*
                            ॐ ॐ

    https://codeforces.com/problemset/problem/1873/E
    Author: Subodh Chandra Shil
    Tag: Binary Search
    ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void ans()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);

    ll start = 1, end = 1e10;
    for (ll i = 0; i < n; ++i)
        cin >> arr[i];

    while (start <= end)
    {
        ll sum = 0;
        ll mid = start + (end - start) / 2;
        for (auto i : arr)
            if (i < mid)
                sum += (mid - i);
        if (sum > x)
            end = mid - 1;
        else
            start = mid + 1;
    }

    cout << end << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}
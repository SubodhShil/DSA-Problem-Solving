#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 10;
vector<ll> savedResult(N, -1);

/// Time complexity: O(n)
ll fibonacci(ll n)
{
    if (n <= 1)
        return 1;

    /// memoization
    if (savedResult[n] != -1)
        return savedResult[n];

    savedResult[n] = fibonacci(n - 2) + fibonacci(n - 1);

    return savedResult[n];
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        cout << fibonacci(n) << endl;
    }

    return 0;
}
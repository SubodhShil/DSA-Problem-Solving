#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
int arr[100];
bool ok = 0;

void ans(int i = 0, int sum = 0)
{
    if (i >= n)
    {
        if (sum == m)
        {
            // cout << sum << endl;
            ok = 1;
        }
        return;
    }

    // take plus
    ans(i + 1, sum + arr[i]);

    // take minus
    ans(i + 1, sum - arr[i]);
}

int32_t main()
{
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    ans(1, arr[0]);
    cout << ((ok) ? "YES\n" : "NO\n");

    return 0;
}
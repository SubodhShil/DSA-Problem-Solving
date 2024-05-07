#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n, k, m, a, b, c;

void ans()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        // cerr << arr[i] << " ";
    }

    unordered_map<int, bool> mp;
    for (int i = 0; i < n - 1; ++i)
    {
        int x = arr[i] + arr[i + 1];
        // cerr << i + 1 << " : " << x << endl;
        mp[x] = true;
    }

    for (int i = 0; i < n; ++i)
    {
        int opposite = -1 * arr[i];
        if (mp.count(opposite))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
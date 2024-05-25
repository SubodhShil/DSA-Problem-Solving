#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void ans()
{
    vector<int> v{7, 4, 3, 2, 1};
    // vector<int> v{1, 2, 3, 4, 7};
    cout << *lower_bound(v.begin(), v.end(), 6, greater<int>()) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
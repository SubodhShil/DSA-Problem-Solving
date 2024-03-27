#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    cin >> n;
    int ans = (n / 2) + (n / 2) * 12;
    if (n & 1)
        cout << ans + 6 << endl;
    else
        cout << ans << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
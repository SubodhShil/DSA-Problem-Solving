#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int x, y;
    cin >> x >> y;

    int ans = 0;
    for (int i = 2; i <= y; i += 2)
        ans += pow(x, i);

    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}
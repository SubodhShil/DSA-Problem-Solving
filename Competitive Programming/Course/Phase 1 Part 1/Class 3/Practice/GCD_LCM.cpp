#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    int a, b;
    cin >> a >> b;
    int x = min(a, b), y = max(a, b);
    if (y % x != 0)
        cout << "-1\n";
    else
        cout << x << ' ' << y << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
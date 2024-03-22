#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

#define lcm(x, y) (x / __gcd(x, y)) * (y)

void ans()
{
    int l, r, x, y;
    cin >> l >> r;
    x = l, y = x * 2;

    bool ok = 0;

    while (x < y and y <= r)
    {
        if (y % x == 0 and lcm(x, y) >= l and lcm(x, y) <= r)
        {
            cout << x << " " << y << endl;
            ok = 1;
            return;
        }
        ++x;
    }

    if (!ok)
    {
        cout << "-1 -1\n";
        return;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
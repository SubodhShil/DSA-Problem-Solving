#include <bits/stdc++.h>
using namespace std;
#define int long long

// TLE
int x, y, z;
void ans()
{
    cin >> x >> y >> z;

    if (z < x)
    {
        cout << 0 << endl;
        return;
    }

    /// 10 5 15
    for (int i = z; i; --i)
    {
        if (i % x == y)
        {
            cout << i << endl;
            return;
        }
    }

    cout << 0 << endl;
}

void ans2()
{
    /*
        k = p * a + b
        k <= n
        p * a + b <= n
        p <= (n - b) / a
     */

    int a, b, n;
    cin >> a >> b >> n;
    int p = (n - b) / a;
    cout << p * a + b << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        // ans();
        ans2();

    return 0;
}
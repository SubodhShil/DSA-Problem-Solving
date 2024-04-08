#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int n;
    cin >> n;

    if (n & 1)
    {
        cout << "YES\n";
        return;
    }

    bool ok = 0;
    for (int i = n / 2; i; i /= 2)
    {
        if ((i & 1) and n % i == 0 and i > 1)
        {
            ok = 1;
            break;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
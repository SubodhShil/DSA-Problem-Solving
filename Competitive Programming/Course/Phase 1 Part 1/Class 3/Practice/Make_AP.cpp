#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    int a, b, c;
    cin >> a >> b >> c;

    int exp_a = 2 * b - c, exp_b = (a + c) / 2, exp_c = 2 * b - a;

    bool ok = 0;
    if (exp_a % a == 0 and exp_a >= a)
        ok = 1;
    else if (exp_c % c == 0 and exp_c >= c)
        ok = 1;
    else if ((a + c) % 2 == 0 and (exp_b % b == 0) and (exp_b >= b))
        ok = 1;

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
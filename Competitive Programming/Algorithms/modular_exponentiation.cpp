#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;

int modularFastExpo(int x, int n)
{
    int ans = 1;
    x = x % MOD;
    if (x == 0)
        return 0;

    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans % MOD * x % MOD) % MOD;
            --n;
        }

        x = (x * x) % MOD;
        // n /= 2;
        n >>= 1;
    }

    return ans;
}

int32_t main()
{
    int a, b;
    cin >> a >> b;
    cout << modularFastExpo(a, b) << endl;

    return 0;
}
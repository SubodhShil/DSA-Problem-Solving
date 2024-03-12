#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, r;

int NCR(int n, int r)
{
    if (n < r or r < 0 or n < 0)
        return 0;

    if (n == 0)
        return 1;

    return NCR(n - 1, r) + NCR(n - 1, r - 1);
}

void ans()
{
    int sum = 1;
    for (int i = 1; i <= r; ++i)
    {
        sum = sum * (n - r + i) / i;
    }

    cout << sum << endl;
}

int32_t main()
{
    cin >> n >> r;
    // ans();
    cout << NCR(n, r) << endl;

    return 0;
}
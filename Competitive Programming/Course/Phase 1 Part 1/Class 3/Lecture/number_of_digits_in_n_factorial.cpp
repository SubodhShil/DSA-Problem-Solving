#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int n;
    cin >> n;
    double digitCnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        digitCnt += log10(i);
    }

    cout << digitCnt + 1 << endl;

    return 0;
}
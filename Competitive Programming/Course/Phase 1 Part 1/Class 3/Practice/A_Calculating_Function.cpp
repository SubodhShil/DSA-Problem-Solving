#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int n, odd = 0, even = 0;
    cin >> n;
    odd = even = n / 2;
    if (n & 1)
        ++odd;

    cout << -1 * (odd * odd) + (even * (even + 1)) << endl;
}

int32_t main()
{
    ans();

    return 0;
}
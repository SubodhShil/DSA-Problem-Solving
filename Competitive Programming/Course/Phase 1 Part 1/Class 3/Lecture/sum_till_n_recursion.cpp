#include <bits/stdc++.h>
using namespace std;
#define int long long

int sum(int n)
{
    if (n <= 0)
        return 0;
    return n + sum(n - 1);
}

int32_t main()
{
    int n;
    cin >> n;
    cout << sum(n);

    return 0;
}
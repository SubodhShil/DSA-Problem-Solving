#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int n, m;
    cin >> n >> m;
    if (m > n)
        swap(m, n);

    n -= m;
    int remain = (n % 10);
    int cnt = n / 10;
    if (remain)
        ++cnt;
    cout << cnt << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
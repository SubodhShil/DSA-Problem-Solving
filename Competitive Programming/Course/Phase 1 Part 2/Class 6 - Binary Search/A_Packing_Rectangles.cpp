#include <bits/stdc++.h>
using namespace std;
#define int long long

int w, h, n;

bool ok(int l)
{
    int cnt = (l / w) * (l / h);
    return cnt >= n;
}

int32_t main()
{
    cin >> w >> h >> n;

    return 0;
}
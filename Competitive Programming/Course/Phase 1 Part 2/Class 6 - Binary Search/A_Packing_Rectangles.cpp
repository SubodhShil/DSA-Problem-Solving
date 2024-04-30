#include <bits/stdc++.h>
using namespace std;
#define int long long

int w, h, n;

int MAX_RANGE = 1e14;

bool ok(int square_length)
{
    // int cnt = (square_length / w) * (square_length / h);
    // return cnt >= n;

    double a = (square_length / w), b = (square_length / h);
    if (a == 0 or b == 0)
        return false;

    return a >= (n * 1.0) / (b * 1.0);
}

int32_t main()
{

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> w >> h >> n;

    int l = 0, r = MAX_RANGE, ans = 0;
    while (l <= r)
    {
        int mid = l + ((r - l) / 2);
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define on_kth_bit(x, k) (x | (1 << k))

void ans()
{
    unsigned x, ans = 0;
    cin >> x;
    int res[32]{0};
    for (int i = 0; i < 32; ++i)
    {
        unsigned int k = 31 - i;
        res[k] = ((x >> k) & 1);
    }

    reverse(res, res + 32);
    for (int i = 0; i < 32; ++i)
    {
        if (res[i])
            ans += (1 << i);
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
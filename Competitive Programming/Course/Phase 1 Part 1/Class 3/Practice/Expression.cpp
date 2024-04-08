#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxVal = max({a + b + c,
                      a * b * c,

                      a * (b + c),
                      a + (b * c),

                      (a * b) + c,
                      (a + b) * c,

                      (b + a) * c,
                      (b * a) + c});

    cout << maxVal << endl;

    return 0;
}
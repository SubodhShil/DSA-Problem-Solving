#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int n, m;
    cin >> n >> m;

    if (n % m == 0)
        cout << 0 << endl;
    else if (m > n)
        cout << m - n << endl;
    else
    {
        int moves = n / m;
        ++moves;
        cout << moves * m - n << endl;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
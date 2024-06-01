#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int f[N];

int main()
{
    int n;
    cin >> n;
    /* f[0] = 0, f[1] = 1;
    for (int i = 2; i <= n; ++i)
        f[i] = f[i - 1] + f[i - 2];

    cout << f[n] << endl; */

    // space optimized version
    if (n <= 1)
    {
        cout << n << endl;
        return 0;
    }

    int previous = 1, previous_2 = 0;
    for (int i = 2; i <= n; ++i)
    {
        int current = previous + previous_2;
        previous_2 = previous;
        previous = current;
    }
    cout << previous << endl;

    return 0;
}
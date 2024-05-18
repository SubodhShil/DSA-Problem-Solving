#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int f[N];

int main()
{
    int n;
    cin >> n;
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= n; ++i)
        f[i] = f[i - 1] + f[i - 2];

    cout << f[n] << endl;
    return 0;
}
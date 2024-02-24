#include <bits/stdc++.h>
using namespace std;

int n, x;

void solve()
{
    cin >> n;
    int matrix[n][n];
    int a = 0, b = 0;
    for(int i = 0; i < n; ++i) for(int j = 0; j < n; ++j) cin >> matrix[i][j];

    for(int i = 0; i < n; ++i) a += matrix[i][i], b += matrix[i][n-1-i];

    // cout << a << ' ' << b << endl;
    cout << abs(a - b) << endl;
}

int main()
{
    solve();

    return 0;
}
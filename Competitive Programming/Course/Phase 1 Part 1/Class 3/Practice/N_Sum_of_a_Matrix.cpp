#include <bits/stdc++.h>
using namespace std;

int A[200][200], B[200][200];
int n, m;

void ans(int i, int j)
{
    if (i >= n)
        return;

    if (j >= m)
    {
        ans(i + 1, 0);
        return;
    }

    cout << A[i][j] + B[i][j];
    if (j == m - 1)
        cout << "\n";
    else
        cout << ' ';
    ans(i, j + 1);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cin >> B[i][j];
    }

    ans(0, 0);

    return 0;
}
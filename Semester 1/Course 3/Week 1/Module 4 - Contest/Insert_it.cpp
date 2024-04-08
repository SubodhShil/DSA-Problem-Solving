#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n;

    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m, 0);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    cin >> x;

    a.insert(a.begin() + x, b.begin(), b.end());

    for (auto i : a)
        cout << i << " ";

    return 0;
}
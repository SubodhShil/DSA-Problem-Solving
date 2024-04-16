#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 1; i < n; ++i)
    {
        v[i] = v[i - 1] + v[i];
    }

    /// showing result
    for (int i = n - 1; i >= 0; --i)
    {
        cout << v[i] << ' ';
    }

    return 0;
}
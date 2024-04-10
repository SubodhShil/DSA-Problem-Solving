#include <bits/stdc++.h>
using namespace std;
#define int long long

void ans()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; ++i)
        v[i] = a - i;

    for (int i = a - 1 - b, j = a - 1; i < j; ++i, --j)
    {
        swap(v[i], v[j]);
    }

    for (auto i : v)
        cout << i << ' ';
    cout << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0, j = n - 1;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    while (i < j)
    {
        swap(v[i], v[j]);
        i++, j--;
    }

    for (auto i : v)
        cout << i << " ";

    return 0;
}
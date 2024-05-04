#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n, 0);
    for (auto &i : v)
        cin >> i;

    while (k--)
    {
        int x;
        cin >> x;
        auto idx = upper_bound(v.begin(), v.end(), x);
        cout << idx - v.begin() << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        auto idx1 = lower_bound(v.begin(), v.end(), a) - v.begin(), idx2 = upper_bound(v.begin(), v.end(), b) - v.begin();

        cout << idx2 - idx1 << " ";
    }

    return 0;
}
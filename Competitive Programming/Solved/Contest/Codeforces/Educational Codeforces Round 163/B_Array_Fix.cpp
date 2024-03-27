#include <bits/stdc++.h>
using namespace std;

/// test case: 19, 99, 91
void ans()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> t;

    for (auto &i : v)
        cin >> i;

    if (is_sorted(v.begin(), v.end()))
    {
        cout << "YES\n";
        return;
    }

    t.push_back(v.back());
    for (int i = n - 2; i >= 0; --i)
    {
        if (v[i] >= 10 && v[i] > t.back())
        {
            t.push_back(v[i] % 10);
            t.push_back(v[i] / 10);
        }
        else
            t.push_back(v[i]);
    }

    reverse(t.begin(), t.end());

    if (is_sorted(t.begin(), t.end()))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans();
        cout << endl;
        ans2();
    }

    return 0;
}
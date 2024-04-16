#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool isDuplicate = false;

    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0, j = 1;
    while (i < n && j < n)
    {
        if (v[i] == v[j])
        {
            isDuplicate = true;
            break;
        }
        else
            ++i, ++j;
    }

    if (isDuplicate)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
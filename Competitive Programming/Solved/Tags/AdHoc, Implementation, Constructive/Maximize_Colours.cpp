#include <bits/stdc++.h>
using namespace std;

void ans()
{
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    int res = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (v[i])
        {
            --v[i];
            ++res;
        }
    }

    sort(v.begin(), v.end(), greater<int>());

    if (v[0] and v[1])
        ++res, --v[0], --v[1];

    if (v[0] and v[2])
        ++res, --v[0], --v[2];

    if (v[1] and v[2])
        ++res, --v[1], --v[2];

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
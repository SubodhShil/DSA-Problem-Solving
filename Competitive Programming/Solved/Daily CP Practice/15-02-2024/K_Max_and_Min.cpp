#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int res_max = INT32_MIN, res_min = INT32_MAX;
    if (x >= y and x >= z)
    {
        res_max = max(res_max, x);
        // now find the minimum number between y and z
        res_min = min(res_min, min(y, z));
    }
    else if (y >= x and y >= z)
    {
        res_max = max(res_max, y);
        res_min = min(res_min, min(x, z));
    }
    else
    {
        res_max = max(res_max, z);
        res_min = min(res_min, min(x, y));
    }

    cout << res_min << " " << res_max << endl;

    return 0;
}
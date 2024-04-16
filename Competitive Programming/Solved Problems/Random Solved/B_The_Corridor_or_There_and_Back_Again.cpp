/*
                            ॐ ॐ
    * https://codeforces.com/problemset/problem/1872/B
    * Author: Subodh Chandra Shil
    * Tag: Math, Generating formula, Observation, Implementation, Adhoc
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int res = INT32_MAX;
        int n;
        cin >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            res = min(res, a + (b - 1) / 2);
        }
        cout << res << endl;
    }

    return 0;
}
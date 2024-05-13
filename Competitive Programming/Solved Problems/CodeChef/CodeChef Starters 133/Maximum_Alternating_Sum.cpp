/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/START133D/problems/MXALT
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void ans()
{
    cin >> n;
    vector<int> v(n, 0);
    for (auto &i : v)
        cin >> i;
    a = b = n / 2;
    if (n & 1)
        ++a;

    sort(v.begin(), v.end(), greater<int>());
    int totalSum = 0;

    for (int i = 0; i < n; ++i)
    {
        if (i < a)
            totalSum += v[i];
        else
            totalSum -= v[i];
    }

    cout << totalSum << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
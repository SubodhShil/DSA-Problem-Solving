/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1968/problem/C
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
    vector<int> v(n - 1, 0), res(n, 1000);
    for (auto &i : v)
        cin >> i;

    for (int i = 1; i < n; ++i)
    {
        res[i] = res[i - 1] + v[i - 1];
    }

    for (auto i : res)
        cout << i << " ";
    cout << endl;
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
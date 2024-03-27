/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/problems/STRONGTABLE
    * Author: Subodh Chandra Shil
    * Tag: Formula generating

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    int ans = v[0];

    for (int i = 1; i < n; ++i)
    {
        ans = max(ans, v[i] * (i + 1));
    }

    cout << ans << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/problems/MKEQ
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void ans()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &i : v)
        cin >> i;

    int minMiddle = *min_element(v.begin(), v.end());
    if (v[0] > minMiddle or v[n - 1] > minMiddle)
        cout << "NO\n";
    else
        cout << "YES\n";
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
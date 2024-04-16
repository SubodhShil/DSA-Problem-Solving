/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

void solve()
{
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    
    int first_idx = n - distance(find(begin(v), end(v), 1), end(v));
    int last_idx = distance(find(rbegin(v), rend(v), 1), rend(v)) - 1;
    // cout << first_idx << ' ' << last_idx << endl;

    int cnt = 0;
    for(int i = first_idx; i <= last_idx; ++i) if(v[i] == 0) ++cnt;
    cout << cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
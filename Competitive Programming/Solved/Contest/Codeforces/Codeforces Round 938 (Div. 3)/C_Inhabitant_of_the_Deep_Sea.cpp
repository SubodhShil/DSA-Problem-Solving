/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

void ans()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a, 0);
    for (auto &i : v)
        cin >> i;

    // for(auto i : v) cerr << i << " ";

    int i = 0, j = a - 1, current = 1, sinks_cnt = 0;
    while (b and i < a and j >= 0)
    {
        // cerr << "Entered ";
        if (current == 1)
        {
            v[i]--, current = 2;
            if (!v[i])
                ++sinks_cnt, ++i;
        }
        else
        {
            v[j]--, current = 1;
            if (!v[j])
                ++sinks_cnt, --j;
        }

        --b;
    }

    cout << sinks_cnt << endl;
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
/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/problems/DISJOINTSUB?tab=statement
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
    cin >> n;
    vector<int> v(n, 0), v2(n, 0);
    for (auto &i : v)
        cin >> i;

    int addNum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] > v[i + 1])
        {
            addNum = max(addNum, v[i] - v[i + 1]);
            ++i;
            v2[i] = 1;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (v2[i] == 1)
            v[i] += addNum;
    }

    if(is_sorted(v.begin(), v.end())) {
        cout << "Yes\n";
    }
    else cout << "No\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
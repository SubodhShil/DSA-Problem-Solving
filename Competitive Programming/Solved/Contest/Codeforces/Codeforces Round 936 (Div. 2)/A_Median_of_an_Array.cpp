/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

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
    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end());

    int mid = n / 2;
    if (n % 2 == 0)
        mid--;
    // cout << mid << endl;

    int midian = v[mid];
    int op = 0;

    for (int i = mid; i < n; ++i)
    {
        if (v[i] == midian)
            ++op;
    }
    cout << op << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
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
    int MEX = n;

    vector<int> a(n, 0), v(n, 0);
    for (auto &x : a)
        cin >> x;

    for (int i = n - 1; i >= 0; --i)
    {
        if (a[i] > 0)
        {
            v[i] = MEX - a[i];
            MEX = v[i];
        }
        else
            v[i] = MEX + abs(a[i]);
    }

    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";
    cout << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
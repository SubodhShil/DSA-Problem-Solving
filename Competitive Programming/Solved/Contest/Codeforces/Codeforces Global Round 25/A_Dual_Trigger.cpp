/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag:
    *

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
    string str;
    cin >> str;
    int cntOne = 0;

    for (auto i : str)
    {
        if (i == '1')
            ++cntOne;
    }

    if (cntOne & 1)
    {
        cout << "NO\n";
        return;
    }

    bool ok = 0;
    if (cntOne % 2 == 0)
        ok = 1;

    if (cntOne == 2)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (str[i] == '1' and str[i + 1] == '1')
            {
                ok = 0;
                break;
            }
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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
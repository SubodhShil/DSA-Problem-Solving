/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag:
                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
vector<char> v(101, 'o');

void ans()
{
    cin >> n;
    for (int i = 3; i <= n; i += 3)
    {
        v[i] = 'x';
    }
    for (int i = 1; i <= n; ++i)
        cout << v[i];
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
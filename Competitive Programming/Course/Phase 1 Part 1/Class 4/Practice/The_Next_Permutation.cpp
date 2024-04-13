/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/hdu-3283
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        int x;
        string num;
        cin >> x >> num;

        if (!next_permutation(num.begin(), num.end()))
            cout << i << " BIGGEST\n";
        else
            cout << i << " " << num << endl;
    }

    return 0;
}
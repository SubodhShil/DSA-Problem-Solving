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
int n;

void ans()
{
    double sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        sum += (1.0 / double(i));
    }

    cout << fixed << setprecision(4) << sum << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}
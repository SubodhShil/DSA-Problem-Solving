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

#define lcm(x, y) (x / __gcd(x, y)) * (y)

void ans()
{
    int a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}
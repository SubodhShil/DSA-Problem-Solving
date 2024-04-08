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

void ans()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 and b == 0 and c == 0)
        exit(0);

    if (b - a == c - b)
        cout << "AP " << c + (c - b) << endl;
    else
        cout << "GP " << c * (c / b) << endl;
}

int32_t main()
{
    while (1)
        ans();

    return 0;
}
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
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    int sumSquares = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << abs((sum * sum) - sumSquares) << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}

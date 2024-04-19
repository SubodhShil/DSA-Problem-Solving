/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/problems/SWMA
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int a, b;

void ans()
{
    cin >> a >> b;
    int a1 = (a % 10) * 10 + a / 10, b1 = (b % 10) * 10 + b / 10;
    if (max(a, a1) > min(b, b1))
        cout << "Yes\n";
    else
        cout << "No\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}
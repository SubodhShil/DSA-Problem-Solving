/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/problemset/problem/1061/A
    * Author: Subodh Chandra Shil
    * Tag: Greedy

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    int a, b;
    cin >> a >> b;

    int res = 0;
    if (b > a)
    {
        res += (b / a);
        if (b % a >= 1)
            ++res;
        cout << res << endl;
    }
    else
        cout << 1 << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}
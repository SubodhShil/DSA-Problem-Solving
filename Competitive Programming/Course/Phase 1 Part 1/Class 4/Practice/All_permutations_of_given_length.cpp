/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/eolymp-4815
    * Author: Subodh Chandra Shil

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
    string num = "";
    for (int i = 1; i <= n; ++i)
        num += to_string(i);

    do
    {
        cout << num << endl;
    } while (next_permutation(num.begin(), num.end()));
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
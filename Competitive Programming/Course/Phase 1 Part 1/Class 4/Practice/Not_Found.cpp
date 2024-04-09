/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/atcoder-abc071_b
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
    int charas[26]{0};

    string str;
    cin >> str;

    for (char i : str)
    {
        charas[i - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (!charas[i])
        {
            cout << (char)(i + 97) << endl;
            return;
        }
    }

    cout << "None\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
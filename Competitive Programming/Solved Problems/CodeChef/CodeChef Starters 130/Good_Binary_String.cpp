/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/problems/GDST
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void ans()
{
    cin >> n;
    string str;
    cin >> str;
    vector<int> res;

    for (int i = 0; i < n - 1; i += 2)
    {
        if (str[i] != str[i + 1])
        {
            if (res.empty() or str[res.back()] == str[i + 1])
                res.push_back(i);
            else
                res.push_back(i + 1);
        }
    }

    cout << res.size() << endl;
    for (auto i : res)
        cout << i + 1 << " ";
    cout << endl;
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
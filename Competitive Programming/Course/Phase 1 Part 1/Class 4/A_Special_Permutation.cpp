/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/problemset/problem/1454/A
    * Author: Subodh Chandra Shil
    * Tag: Constructive

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

// lengthy solution
void ans()
{
    cin >> n;
    if (n & 1)
    {
        int x = ceil(n / 2.0);
        for (int i = n; i >= x + 1; --i)
            cout << i << " ";
        for (int i = 1; i <= x; ++i)
            cout << i << " ";
        cout << endl;
        return;
    }

    for (int i = n; i >= 1; --i)
        cout << i << ' ';
    cout << endl;
}

// better solution
void ans2()
{
    cin >> n;
    cout << n << " ";
    for (int i = 1; i <= n - 1; ++i)
        cout << i << " ";
    cout << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans2();

    return 0;
}
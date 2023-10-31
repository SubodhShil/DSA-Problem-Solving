/*
                            ॐ ॐ
    * https://atcoder.jp/contests/abc322/tasks/abc322_a
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void ans()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int flag = -1;

    for (int i = 0, j = 1, k = 2; k < n; ++i, ++j, ++k)
    {
        if (str[i] == 'A' && str[j] == 'B' && str[k] == 'C')
        {
            flag = i + 1;
            break;
        }
    }

    cout << flag << endl;
}

int main()
{
    superfast int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}
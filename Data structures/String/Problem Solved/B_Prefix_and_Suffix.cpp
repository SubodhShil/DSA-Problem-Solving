/*
                            ॐ ॐ
    * https://atcoder.jp/contests/abc322/tasks/abc322_b
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

void ans()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    bool isPrefix = true;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] != b[i]) {
            isPrefix = false;
            break;
        }
    }
    
    bool isSuffix = true;
    for(int i = 0, j = m - n; i < n; ++i, ++j)
    {
        if(a[i] != b[j])
        {
            isSuffix = false;
            break;
        }
    }

    if(isSuffix)
        cout << (isPrefix ? 0 : 2) << endl;
    else 
        cout << (isPrefix ? 1 : 3) << endl;
}

int main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}
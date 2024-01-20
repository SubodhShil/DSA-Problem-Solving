
/*
                            ॐ ॐ

    * https://codeforces.com/contest/633/problem/A
    * Author: Subodh Chandra Shil
    * Tag: Math
    * ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

void ans()
{
    ll a, b, c;
    cin >> a >> b >> c;

    for(ll i = 0; 1LL * i * a <= c; ++i) 
    {
        if((c - (i * 1LL * a)) % b == 0) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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
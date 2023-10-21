/*
                            ॐ ॐ
    * https://cses.fi/problemset/task/1083/
    * Author: Subodh Chandra Shil
    * Tag: Math, GCD
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;

    fori(n - 1)
    {
        ll x;
        cin >> x;
        sum -= x;
    }

    cout << sum << endl;
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
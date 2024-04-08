/*
                            ॐ ॐ
    * https://codeforces.com/problemset/problem/1879/B
    * Author: Subodh Chandra Shil
    * Tag: Observation, Implementation, Math, Ad hoc
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    ll sumA = 0, sumB = 0;
    ll minA = INT64_MAX, minB = INT64_MAX;

    for(ll i = 1; i <= 2*n;++i)
    {
        ll x;
        cin >> x;
        if(i <= n){
            sumA += x;
            minA = min(minA, x);
        }
        else {
            sumB += x;
            minB = min(minB, x);
        }
    }

    cout << min((minA * 1LL* n + 1LL* sumB), (minB * 1LL* n + 1LL* sumA)) << endl;
}

int main()
{
    superfast
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}
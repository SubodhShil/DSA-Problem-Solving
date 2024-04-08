/*
                            ॐ ॐ

    * https://codeforces.com/contest/1916/problem/B
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

/// for loops
#define fori(x) for( ll i = 0; i < x; i++)
#define forj(x) for( ll j = 0; j < x; j++)

void ans() 
{
    ll a, b;
    cin >> a >> b;
    
    if(b % a == 0) 
        cout << (b*b)/a << endl;
    else 
        cout << (a*b) / __gcd(a, b) << endl;
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
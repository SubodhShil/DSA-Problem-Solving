/*
                            ॐ ॐ

    * https://codeforces.com/contest/1858/problem/A
    * Author: Subodh Chandra Shil
    * Tag: Ad hoc, counting
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
    ll a, b, c;
    cin >> a >> b >> c;

    if(a > b) cout << "First\n";
    else if(a < b) cout << "Second\n";
    else {
        if(c & 1) cout << "First\n";
        else cout << "Second\n";
    }
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
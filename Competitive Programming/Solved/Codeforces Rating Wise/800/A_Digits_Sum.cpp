#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

/// TLE
void ans1()
{
    ll n;
    cin >> n;
    ll s = 9, cnt = 0;
    while(s <= n)
    {
        s += 10;
        ++cnt;
    }

    cout << cnt << endl;
}

void ans()
{
    ll n;
    cin >> n;
    ll cnt = n / 10;
    if(n % 10 == 9) ++cnt;
    // cout << cnt << endl;
    cout << (n + 1) / 10 << endl;
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
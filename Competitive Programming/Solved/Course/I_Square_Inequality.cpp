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
    ll a, b,c;
    cin >> a >> b >> c;
    if(pow(c, 2) > (pow(a, 2) + pow(b, 2))) cout << "Yes\n";
    else cout << "No\n";
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
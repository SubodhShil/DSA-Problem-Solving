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
    int i1, j1, i2, j2, i3, j3;
    cin >> i1 >> j1 >> i2 >> j2 >> i3 >> j3;
    int res = 1;
    if((i1 > i2  && i1 > i3 )|| (i1 < i2 && i1 < i3))
    {
        res += min(abs(i1 - i2), abs(i1 - i3));
    }

    if((j1 > j2 && j1 > j3) || (j1 < j2 && j1 < j3)) 
    {
        res += min(abs(j1 - j2), abs(j1 - j3));
    }

    cout << res << endl;
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
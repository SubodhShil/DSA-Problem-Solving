#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"Yes"<<endl;}
#define no {cout<<"No"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int x, y;
    cin >> x >> y;

    if(x % 2 != 0 && y % 2 != 0) no 
    if(x % 2 == 0 && y % 2 == 0) yes
    else if(x % 2 == 0 && y % 2 != 0)
    {
        if(x / 2 == y) no
        else yes
    }
    else if(y % 2 == 0 && x % 2 != 0)
    {
        if(y / 2 == x) no
        else yes
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
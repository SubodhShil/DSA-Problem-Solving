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
    int n, x, s = 0;
    cin >> n >> x;

    string str;
    cin >> str;
    for(auto i : str)
    {
        if(s < 0)
            break;
        if(i == '0') 
            --s;
        else s = x;
    }

    if(s < 0) no
    else yes
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
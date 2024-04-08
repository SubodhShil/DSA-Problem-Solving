#include<bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"Lucky"<<endl;}
#define no {cout<<"Unlucky"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int x;
    fori(n) cin >> x, mp[x]++;

    for(auto i : mp)
    {
        if(i.second & 1) 
        {
            yes 
            return;
        }
        break;
    }

    no
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
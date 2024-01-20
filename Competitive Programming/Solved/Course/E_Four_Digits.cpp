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
    string x;
    cin >>x;
    int n = x.size();
    if(x.size() == 4) cout << x << endl;
    else {
        if(n == 1) cout << "000" << x << endl;
        if(n == 2) cout << "00" << x << endl;
        if(n == 3) cout << "0" << x << endl;
    }
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
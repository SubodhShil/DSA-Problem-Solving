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
    string str;
    cin >> str;

    for(auto i : str)
    {
        if(i == ',') cout << ' ';
        else if(i >= 97 && i <= 122) cout << char(i - 32);
        else cout << char(i + 32);
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
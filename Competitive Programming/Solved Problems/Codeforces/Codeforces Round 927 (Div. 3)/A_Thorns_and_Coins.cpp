#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

#define int long long

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans1()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int thorns = 0, res = 0;
    for(auto i : str)
    {
        if(thorns >= 2) break;
        if(i == '*') ++thorns;
        else {
            if(i == '@') ++res;
            thorns = 0;
        }
    }

    cout<< res << endl;
}

void ans()
{
    int n, res = 0; cin >> n;
    string str; cin >> str;

    for(int i = 0; i < n; ++i)
    {
        if(i + 1 < n && str[i] == '*' && str[i + 1] == '*') break;
        if(str[i] == '@') ++res;
    }

    cout << res << endl;
}

int32_t main()
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
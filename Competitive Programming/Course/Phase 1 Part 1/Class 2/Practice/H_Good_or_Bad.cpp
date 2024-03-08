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

    bool ok = 0;
    for(int i = 0; i <= str.size() - 3; ++i)
    {
        string t = str.substr(i, 3);
        if(t == "010" || t == "101") {
            cout<< "Good\n";
            return;
        }
    }
    cout<< "Bad\n";
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
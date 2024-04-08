#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"yes"<<endl;}
#define no {cout<<"no"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n; 
    cin >> n;
    map<int, int> mp;
    fori(n * 2) {
        int x; cin >> x;
        mp[x]++;
    }

    bool ok = 1;
    for(auto i : mp)
    {
        if(i.second == 1 || i.second & 1) {
            ok = 0;
            break;
        }
    }

    cout << (ok ? "yes" : "no") << endl;
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
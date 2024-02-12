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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;++i)
    {
        cin >> v[i];
    }

    int i = 0, j = n - 1;
    while(i <= j) {
        if(v[i] != v[j])  {
            cout << "NO\n";
            return;
        }
        ++i, --j;
    }

    cout << "YES\n";
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
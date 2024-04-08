#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}
#define endl "\n"

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    int each = n / 3;
    if(n % 3 == 0) cout << each  << ' ' << each + 1 << ' ' << each - 1 << endl;
    else if(n % 3 == 1) cout << each << ' ' << each + 2 << ' ' << each  - 1 << endl;
    else cout << each + 1 << ' ' << each + 2 << ' ' << each - 1 << endl;
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
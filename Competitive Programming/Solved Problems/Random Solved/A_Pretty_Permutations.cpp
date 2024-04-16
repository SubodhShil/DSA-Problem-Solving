#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 1; i <= x; i += 2)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;

    if(n % 2 == 0) {
        fori(n) cout << i + 1 << " " << i << ' ';
    }
    else {
        fori(n - 3) cout << i + 1 << ' ' << i << ' ';
        cout << n << ' ' << n - 2 << " " << n - 1;
    }

    cout << endl;
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
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
    int t, n, m;
    cin >> t >> n >> m;
    int x = (m / n);
    int rem = (m % n);   

    if(t > x)
        cout << x * n * n + rem * rem << endl;
    else 
        cout << t * n * n << endl;
}

int main()
{
    superfast
    int t;
    cin >> t;
    
    fori(t)
    {
        // cout << "Case " << t << " : ";
        ans();
    }

    return 0;
}
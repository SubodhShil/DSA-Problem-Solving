#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

/// bruteforce
void ans1()
{
    int x, y, z;
    cin >> x >> y >> z;

    int ans = -1;
    for(int i = 1;; ++i)
    {
        int n = i * z;
        if(n > y) break;
        if(n >= x && n <= y) {
            ans = n;
            break;
        }
    }

    cout << ans << endl;
}

// optimized
void ans()
{
    int x, y,z;
    cin >> x >> y >> z;
    // find multiple that not exceeding 'y'

    int least = y / z * z;
    if(least >= x) cout << least << endl;
    else cout << -1 << endl;
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
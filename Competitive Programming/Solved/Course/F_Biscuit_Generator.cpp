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
    int a, b, res = 0;
    float t;
    cin >> a >> b >>t;
    t += 0.5;

    if(a > t) cout << 0 << endl;
    else {
        for(int i = 1; a * i <= t; ++i) {
            res+=b;
        }
        cout<< res << endl;
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
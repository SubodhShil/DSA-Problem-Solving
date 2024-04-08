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
    int f = 1, s = 1, t = n - 2;

    if(t > 26) {
        s += t - 26; 
        t = 26;
        if(s > 26) 
        {
            f += s - 26;
            s = 26;
        }
    }

    cout << char(f + 96) << char(s + 96) << char(t + 96) << endl;
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
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
    int s, t, res = 0;
    cin >> s >> t;
    for(int a = 0; a <= s; ++a)
        for(int b = 0; b <= s; ++b)
            for(int c = 0; c <= s; ++c)
                if(a + b + c <= s and a * b * c <= t) ++res;

    cout << res << endl;
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
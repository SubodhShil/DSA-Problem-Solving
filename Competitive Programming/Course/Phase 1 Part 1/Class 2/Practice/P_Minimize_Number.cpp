#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define int long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;

    int oddCnt = 0;
    vector<int> v(n);
    for(auto &i : v) {
        cin >> i;
        if(i & 1) {
            ++oddCnt;
        }
    }

    int cnt = 0;
    while(!oddCnt) {
        ++cnt;
        for(int i = 0; i < n; ++i)
        {
            v[i] /= 2;
            if(v[i] & 1) ++oddCnt;
        }
    }

    cout << cnt << endl;
}

int32_t main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}
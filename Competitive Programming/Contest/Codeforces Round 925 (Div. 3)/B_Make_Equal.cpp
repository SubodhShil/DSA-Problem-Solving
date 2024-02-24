#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 1; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

#define int long long 

void ans()
{
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(auto &i : v) {
        cin >> i;
        sum += i;
    }

    int avg = sum / n;
    for(int i = 0; i < n; ++i)
    {
        v[i] -= avg;
    }

    int curr_sum = 0;
    bool ok = 1;
    for(int i = 0; i < n; ++i)
    {
        curr_sum += v[i];
        if(curr_sum < 0){
            ok = 0;
            break;
        } 
        else v[i] = 0;
    }

    if(!ok || curr_sum < 0) no
    else yes
}

int32_t main()
{
    superfast
    int t = 1;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}
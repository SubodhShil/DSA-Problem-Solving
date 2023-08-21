#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x, y) for( int i = x; i < y; i++)
#define forj(x, y) for( int j = x; j < y; j++)

void ans()
{
    int n, k;
    cin >> n >> k;

    pii pr[n];
    vector<int> a;
    int ans[n];

    for(int i = 0; i < n * 2; ++i)
    {
        int x;
        cin >> x;
        if(i >= n)
        {
            a.push_back(x);
            continue;
        }
        pr[i].first = x;
        pr[i].second = i;
    }


    sort(pr + 0, pr + n);
    sort(a.begin(), a.end());


    for(int i = 0;i < n; ++i)
        ans[pr[i].second] = a[i];

    fori(0, n)
        cout << ans[i] << ' ';

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
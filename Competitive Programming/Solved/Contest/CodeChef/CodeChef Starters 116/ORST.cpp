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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for(int i = 0; i <n; ++i) cin >> a[i];
    for(int i = 0; i <m; ++i) cin >> b[i];
    int maxEle = *max_element(b.begin(), b.end());

    reverse(a.begin(), a.end());
    sort(a.begin(), a.begin() +  maxEle, greater<int>());

    reverse(a.begin(), a.end());
    for(int i : a) cout << i << ' ';
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
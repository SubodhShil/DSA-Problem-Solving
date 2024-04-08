#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

void ans()
{
    int n, limit, prev = -1, res = -1;
    cin >> n >> limit;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    for(int i = 0; i < n;++i)
    {
        if(a[i] + i <= limit) {
            if(b[i] > prev) prev = b[i], res = i+1;
        }
    }

    cout << res << endl;
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
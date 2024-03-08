/*
                            ॐ ॐ

    * https://codeforces.com/contest/1899/problem/B
    * Author: Subodh Chandra Shil
    * Tag: Prefix Sum

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 1; j < x; j++)

void ans()
{
    ll n, res = 0;
    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if(i >= 1) v[i] += v[i - 1]; 
    }

    /* fori(n) cout << v[i] << ' ';
    cout << endl << endl;
 */
for(int i = 1; i <= n; ++i)
    {
        if(n % i == 0)
        {
            ll mx = LLONG_MIN, mn = LLONG_MAX;
            for(int j = i; j <= n; j += i) 
            {
                mn = min(mn, v[j] - v[j - i]);
                mx = max(mx, v[j] - v[j - i]);
            }

            res = max(res, mx - mn);
        }
    }

    cout << res << endl;
}

/* void solve(){
    int n;
	cin>>n;
	vector<ll> a(n),pre(n+1);
	for(int i=0;i<n;++i) cin>>a[i],pre[i+1]=pre[i]+a[i];
	ll ans = 0;
	for(int i=n;i>=1;--i){
		if(n%i==0){
			ll mn=LLONG_MAX,mx=LLONG_MIN;
			for(int j=i;j<=n;j+=i){
				mn=min(mn,pre[j]-pre[j-i]);
				mx=max(mx,pre[j]-pre[j-i]);
			}
			ans=max(ans,mx-mn);
		}
	}cout<<ans<<'\n';
} */

int main()
{
    superfast
    int t;
    cin >> t;
    while (t--)
    {
        ans();
        // solve();
    }

    return 0;
}


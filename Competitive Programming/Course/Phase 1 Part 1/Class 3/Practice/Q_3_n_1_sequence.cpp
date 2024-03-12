/*
                            ॐ ॐ

    * 
    * Author: Subodh Chandra Shil
    * Tag: 
    * ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

#define superfast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
int n, x;

void ans(int cnt = 1)
{
    if(n == 1)
    {
        cout << cnt << endl;
        return;
    }

    if(n & 1) n = 3 * n + 1;
    else n /= 2;
    
    ans(cnt + 1);
}

void solve()
{
    cin >> n;
    ans();
}

int32_t main()
{
    superfast
    
    int t = 1;
    while (t--) solve();

    return 0;
}

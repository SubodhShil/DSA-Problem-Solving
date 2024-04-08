/*
                            ॐ ॐ

    * https://codeforces.com/contest/26/problem/A
    * Author: Subodh Chandra Shil
    * Tag: Math
    * ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

int factorization(int n) {
    int cnt = 0;
    int x = n;
    for(int i = 2; i*i <= n; ++i)
    {
        if(n % i == 0)
        {
            while(n % i == 0) n /= i;
            ++cnt;
        }
    }
    if(n > 1)  {
        // cout << x << ' ' << n << endl;
        ++cnt;
    }
    return cnt;
}

void ans()
{   
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        if(factorization(i) == 2) ++cnt;
    }

    cout << cnt << endl;
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
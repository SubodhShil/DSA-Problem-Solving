/*
                            ॐ ॐ

    * https://www.codechef.com/problems/GCDPERM?tab=statement 
    * Author: Subodh Chandra Shil
    * Tag: Math, GCD
    * ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

void ans()
{
    int n, k;
    cin >> n >> k;
    int start = n / k, cnt = 0, next = start;
    while(cnt < k) 
    {
        cout << next << ' '; 
        next += start;
        ++cnt;
    }

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
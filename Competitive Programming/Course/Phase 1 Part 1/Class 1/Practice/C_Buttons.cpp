#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

void ans()
{
    int a, b, res = 0;
    cin >> a >> b;
    if(a > b) res += a * 2 - 1;
    else if(b > a) res = b * 2 - 1;
    else res = a * 2;

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
#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)
#define int long long 

void ans()
{
    int n; cin >> n; 
    int a = 0, b = 1;

    if(n <= 2) {
        cout << n - 1 << endl;
        return;
    }

    for(int i = 1; i <= n - 2; ++i)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    cout << b << endl;
}

const int N = 50;
int fibo[N + 1]{0};
void ans2() 
{
    int n; cin >> n;
    fibo[1] = 0, fibo[2] = 1;
    for(int i = 3; i <= n; ++i)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n] << endl;
}

int32_t main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans2();
    }

    return 0;
}
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
    int a, b;
    cin >> a >> b;
    vector<int> v1(a), v2(b);

    fori(a) {
        cin >> v1[i];
    }

    fori(b) {
        cin >> v2[i];
    }

    int i = 0, j = 0;
    while(i < a && j < b) {
        if(v1[i] == v2[j]) 
            ++j;
        ++i;
    }

    if(j <= b - 1) no
    else yes
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
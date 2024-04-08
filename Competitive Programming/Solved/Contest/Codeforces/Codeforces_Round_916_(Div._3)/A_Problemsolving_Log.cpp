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
    int n;
    cin >> n;
    vector<int> hash(27, 0);
    string str;
    cin >> str;
    for(auto i : str)
        hash[int(i) + 1 - 65]++;

    int cnt = 0;
    for(int i = 1; i <= 26; ++i)
        if (hash[i] >= i) ++cnt;
    
    cout << cnt << endl;
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
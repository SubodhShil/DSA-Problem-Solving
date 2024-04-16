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
    vector<int> arr(n);

    map<int, int> mp;
    for(auto &i : arr)
    {
        cin >> i;
        mp[i]++;
    }

    string str;
    for(int i = n - 1; i >= 0; --i)
    {
        str = char('a' + mp[arr[i]] - 1) + str;
        mp[arr[i]]--;
    }
    cout << str << endl;
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
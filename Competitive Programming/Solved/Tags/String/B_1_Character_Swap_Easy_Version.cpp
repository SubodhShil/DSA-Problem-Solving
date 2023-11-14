#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"Yes"<<endl;}
#define no {cout<<"No"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> indexStore;

    for(int i = 0; i < n; ++i)
    {
        if(s1[i] != s2[i])  indexStore.push_back(i);
    }

    if(indexStore.size() == 2)
    {
        if(s1[indexStore[0]] == s1[indexStore[1]] && s2[indexStore[0]] == s2[indexStore[1]])    
            cout << "Yes\n";
        else cout << "No\n";
    }
    else cout << "No\n";
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
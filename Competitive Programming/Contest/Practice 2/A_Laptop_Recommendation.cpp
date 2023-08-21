/**
 * @file        A_Laptop_Recommendation.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://www.codechef.com/problems/LAPTOPREC
 */

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
    unordered_map<int, int> mp;
    while(n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int maxVal = INT32_MIN;
    int maxValCnt = 0;
    int maxEle = 0;

    for(auto i : mp)
    {
        if(i.second > maxVal)
        {
            maxEle = i.first;
            maxVal = i.second;
            maxValCnt = 1;
        }
        else if(i.second == maxVal)
            ++maxValCnt;
    }

    if(maxValCnt > 1) 
    {
        cout << "CONFUSED\n";
    }
    else cout << maxEle << endl;
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
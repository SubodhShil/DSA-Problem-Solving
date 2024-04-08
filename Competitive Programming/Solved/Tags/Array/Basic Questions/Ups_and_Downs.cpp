/*
                            ॐ ॐ
    * https://www.codechef.com/problems/ANUUND
    * Author: Subodh Chandra Shil
    * Tag: Array
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x - 1; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for(int i = 0; i< n;++i) cin >> arr[i];
    
    for(int i = 0, j = 1; j < n; ++i, ++j) {
        if(i % 2 != 0 && arr[i] < arr[i + 1]) swap(arr[i] , arr[i + 1]);
        else if(i % 2 == 0 && arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
    }

    for(auto i : arr) cout << i << ' ';
}

int main()
{
    superfast
    int t;
    cin >> t;
    while (t--)
    {
        ans();
        cout << endl;
    }

    return 0;
}

/* 
----------------------
Points to be remember: 
----------------------
1. Don't over depend on the test cases, Generate your test case with maximum possible
edge cases

HARE KRISHNA

*/
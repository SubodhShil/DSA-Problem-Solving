/*
                            ॐ ॐ

    * https://www.codechef.com/problems/DICEGAME2
    * Author: Subodh Chandra Shil
    * Tag: Joke
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
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans1()
{
    int arr1[3], arr2[3];
    cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr2[0] >> arr2[1] >> arr2[2];
    sort(arr1, arr1 + 3), sort(arr2, arr2 + 3);
    int val1 = arr1[1] + arr1[2], val2 = arr2[1] + arr2[2];

    if(val1 > val2) cout << "Alice\n";
    else if(val2 > val1)  cout << "Bob\n";
    else cout << "Tie\n";
}

void ans() 
{
    int aliceTotal = 0, bobTotal = 0, aliceMin = 7, bobMin = 7;
    fori(6) {
        int x;
        cin >> x;
        if(i <= 2) aliceTotal += x, aliceMin = min(aliceMin, x);
        else bobTotal += x, bobMin = min(bobMin, x);
    }
    
    if(aliceTotal - aliceMin > bobTotal - bobMin) cout << "Alice\n";
    else if(aliceTotal - aliceMin < bobTotal - bobMin) cout << "Bob\n";
    else cout << "Tie\n";
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
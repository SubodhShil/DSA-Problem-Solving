/**
 * @file        C_Good_Sequence.cpp
 * @author      Subodh Chandra Shil
 * @link        https://atcoder.jp/contests/arc087/tasks/arc087_a
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, removeCnt = 0;
    cin >> n;

    vector<ll> arr(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second > i.first)
            removeCnt += i.second - i.first;
        if (i.first > i.second)
            removeCnt += i.second;
    }

    cout << removeCnt << endl;

    return 0;
}
/**
 * @file        Maps_STL.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int i;
        string name;
        cin >> i >> name;
        if (i == 1)
        {
            int marks;
            cin >> marks;
            /* if (mp.count(name))
                mp[name] += marks;
            else
                mp[name] = marks; */

            // mp[name] += marks;
        }
        else if (i == 2)
            mp[name] = 0;
        else
            cout << mp[name] << endl;
    }

    return 0;
}
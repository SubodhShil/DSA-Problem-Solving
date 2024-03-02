/**
 * @file        D_Counting_Elements.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-07
 * @resource:   https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (v[i] + 1 == v[j])
            {
                ++count;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}
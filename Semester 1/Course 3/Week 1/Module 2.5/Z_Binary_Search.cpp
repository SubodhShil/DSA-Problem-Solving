/**
 * @file        Z_Binary_Search.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-07
 * @resource:   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
 */

#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> &v, int target)
{
    int start = 0, end = v.size() - 1;
    bool isFound = false;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (v[mid] == target)
        {
            isFound = true;
            break;
        }
        else if (v[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    (isFound) ? cout << "found\n" : cout << "not found\n";
}

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;

        binarySearch(v, x);
    }

    return 0;
}
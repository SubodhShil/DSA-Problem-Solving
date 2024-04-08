/**
 * @file        L_New_Array.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-07
 * @problem:    https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
 */

#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<int> c;

    for (int i = 0; i < n * 2; ++i)
    {
        if (i < n)
            cin >> a[i];
        else
        {
            cin >> b[i - n];
            int x = b[i - n] + a[i - n];
            c.push_back(x);
        }
    }

    for (int i = 0; i < n * 2; ++i)
    {
        if (i < n)
            cout << c[i] - a[i] << " ";
        else
            cout << c[i - n] - b[i - n] << " ";
    }
}

int main()
{
    ans();

    return 0;
}
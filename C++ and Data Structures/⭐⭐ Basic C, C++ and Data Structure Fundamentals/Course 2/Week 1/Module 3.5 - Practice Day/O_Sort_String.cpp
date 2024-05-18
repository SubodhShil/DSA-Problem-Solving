/**
 * @file        O_Sort_String.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-25
 * @question:   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[26] = {0};

    /// hashing the character array
    for (int i = 0; i < n; ++i)
    {
        char ch;
        cin >> ch;
        arr[ch - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] > 1)
        {
            int occur = arr[i];
            for (int j = 0; j < occur; ++j)
            {
                cout << char(i + 'a');
            }
        }

        if (arr[i] == 1)
        {
            cout << char(i + 'a');
        }
    }

    return 0;
}
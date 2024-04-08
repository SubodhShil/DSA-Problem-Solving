/**
 * @file        Sets_STL.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://www.hackerrank.com/challenges/cpp-sets/problem
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int> st;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
            st.insert(y);
        else if (x == 2)
            st.erase(y);
        else if (x == 3 && st.count(y))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
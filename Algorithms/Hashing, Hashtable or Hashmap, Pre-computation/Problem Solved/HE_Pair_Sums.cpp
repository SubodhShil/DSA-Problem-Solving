/**
 * @file HE_Pair_Sums_TODO.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-10
 * @problem_source: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/
 */

#include <bits/stdc++.h>
using namespace std;

void ans(vector<int> &v, int sum)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < v.size(); i++)
    {
        int a = v[i];
        int b = sum - a;

        if (mp[b])
        {
            cout << "YES\n";
            return;
        }
        else
            mp[a]++;
    }

    cout << "NO\n";
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    ans(v, k);

    return 0;
}
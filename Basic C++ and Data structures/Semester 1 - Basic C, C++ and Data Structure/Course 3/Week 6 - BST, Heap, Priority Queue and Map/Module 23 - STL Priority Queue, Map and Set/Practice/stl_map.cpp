#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"Subodh Chandra Shil", 11});
    mp.insert({"Rajmohan Chandra Shil", 14});
    mp.insert({"Tondra Chandra Shil", 13});

    for (auto i : mp)
        cout << i.first << ' ' << i.second << endl;

    return 0;
}
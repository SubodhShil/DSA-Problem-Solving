#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Hashing data structure
 * @author Subodh Chandra Shil
 * @topic hashmap
 */

int main()
{
    cout << "Enter array size: ";
    int size;
    cin >> size;

    vector<int> v(size);
    // map<int, int> mp;
    unordered_map<int, int> mp;

    for (auto i : v)
    {
        cin >> i;

        /// pre-computing
        mp[i]++;
    }

    cout << "Enter queries: ";
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        cout << mp[x] << endl;
    }

    return 0;
}
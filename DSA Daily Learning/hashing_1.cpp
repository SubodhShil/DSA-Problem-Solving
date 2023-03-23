#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Hashing technique
 * @author Subodh Chandra Shil
 * @topic Number hashing
 */

int main()
{
    int n;
    cin >> n;
    int arr[n];
    /// taking user input
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /**
     * @brief
     * precomputing
     */

    /// the size would be what question says
    /// we should always take n + 1 size of hash array
    int hashSize = n + 1;
    int hash[hashSize]{0};

    /// loop that add up occurrence count to the hash array
    for (int i = 0; i < hashSize; i++)
    {
        hash[arr[i]]++;
    }

    /**
     * @brief
     * fetching
     */
    int q = 0;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}
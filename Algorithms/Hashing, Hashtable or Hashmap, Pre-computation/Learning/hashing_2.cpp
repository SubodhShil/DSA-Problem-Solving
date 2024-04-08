#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Hashing technique
 * @author Subodh Chandra Shil
 * @topic Character hashing
 */

int hashing_map_class(string s, int character)
{
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    return mp[character];
}

int main()
{
    string word;
    cin >> word;

    /**
     * @brief
     * precomputing
     */

    /// there are only 256 extended ASCII characters
    /// as for C++ we work with ASCII characters
    /// reference:
    int asciiCharSize = 256;

    /// the size would be what question says
    /// we should always take n + 1 size of hash array
    int hashSize = asciiCharSize + 1;
    /// @error_handle: array elements should filled with value 0
    int hash[hashSize]{0};

    /// loop that add up occurrence count to the hash array
    for (int i = 0; i < word.size(); i++)
    {
        /// convert character into ASCII number value
        /// @formula characters from a-z: ch - 'a'
        /// @formula characters from A-Z: ch - 'A'
        int numValue = int(word[i]);

        hash[numValue]++;
    }

    /**
     * @brief
     * fetching
     */
    cout << "\nFind occurrence using array implemented hashing\n";
    int q = 0;
    cin >> q;
    while (q--)
    {
        char character;
        cin >> character;
        int numberValue = int(character);

        cout << hash[numberValue] << endl;
    }

    /**
     * @brief
     * hashmap C++
     * @data_structure: map
     */
    cout << "\nFind occurrence using C++ map\n";
    int t = 0;
    cin >> t;

    while (t--)
    {
        char character;
        cin >> character;
        cout << hashing_map_class(word, character) << endl;
    }

    return 0;
}
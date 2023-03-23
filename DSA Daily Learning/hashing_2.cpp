#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Hashing technique
 * @author Subodh Chandra Shil
 * @topic Character hashing
 */

int main()
{
    string word;
    cin >> word;

    /**
     * @brief
     * precomputing
     */

    /// there are only 127 ASCII characters
    /// as for C++ we work with ASCII characters
    /// reference:
    int asciiCharSize = 127;

    /// the size would be what question says
    /// we should always take n + 1 size of hash array
    int hashSize = asciiCharSize + 1;
    /// @error-handle array elements should filled with value 0
    int hash[hashSize]{0};

    /// loop that add up occurrence count to the hash array
    for (int i = 0; i < word.size(); i++)
    {
        /// convert character into ASCII number value
        int numValue = int(word[i]);

        hash[numValue]++;
    }

    /**
     * @brief
     * fetching
     */
    int q = 0;
    cin >> q;
    while (q--)
    {
        char character;
        cin >> character;
        int numberValue = int(character);

        cout << hash[numberValue] << endl;
    }

    return 0;
}
/**
 * @file            LC_443_String_Compression.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-27
 * @resource:       https://leetcode.com/problems/string-compression/description/
 *                  https://youtu.be/Wdjr6uoZ0e0
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
/// extra space taken
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        vector<char> result;
        int cnt = 1;

        for (int i = 0; i < chars.size(); ++i)
        {
            if (cnt == 1)
            {
                result.push_back(chars[i]);
            }

            if (i + 1 < chars.size() && chars[i] == chars[i + 1])
            {
                ++cnt;
            }
            else
            {
                if (cnt > 1)
                {
                    string number = to_string(cnt);

                    for (char ch : number)
                    {
                        result.push_back(ch);
                    }
                }

                cnt = 1;
            }
        }

        chars = result;
        return result.size();
    }
};

class Solution2
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while (i < n)
        {
            /// storing old character
            chars[ansIndex++] = chars[i];

            int j = i + 1;
            // comparing to the next element
            while (j < n && chars[i] == chars[j])
            {
                ++j;
            }

            /// aforementioned while loop finsished either for two reasons
            /// the array is traversed full
            /// while loop encounters new character

            int count = j - i;

            if (count > 1)
            {
                string cnt = to_string(count);
                for (char ch : cnt)
                    chars[ansIndex++] = ch;
            }

            i = j;
        }

        return ansIndex;
    }
};

int main()
{
    // vector<char> v{'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    // vector<char> v{'a'};
    vector<char> v{'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};

    Solution sol;
    cout << sol.compress(v) << endl;

    return 0;
}
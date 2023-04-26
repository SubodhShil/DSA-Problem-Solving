#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool compareWindow(int a[26], int b[26])
    {
        for (int i = 0; i < 26; ++i)
        {
            if (a[i] != b[i])
                return 0;
        }

        return 1;
    }

public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> result;

        int count1[26] = {0};

        for (int i = 0; i < p.length(); ++i)
            count1[p[i] - 'a']++;

        int windowSize = p.length();
        int i = 0;

        int count2[26] = {0};

        while (i < windowSize && i < s.length())
        {
            count2[s[i] - 'a']++;
            ++i;
        }

        /// comparing first window
        if (compareWindow(count1, count2))
            result.push_back(i - windowSize);

        while (i < s.length())
        {
            /// adding new character occurrences to the hash array
            count2[s[i] - 'a']++;

            /// eliminate old character occurrence
            count2[s[i - windowSize] - 'a']--;

            ++i;

            if (compareWindow(count1, count2))
            {
                result.push_back(i - windowSize);
            }
        }

        return result;
    }
};

int main()
{

    return 0;
}
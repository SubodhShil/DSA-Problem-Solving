#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    char getMaxOccuringChar(string str)
    {
        int size = str.length();
        int occurrences[26] = {0};
        int maxCount = 0;
        char maxChar = ' ';

        for (int i = 0; i < size; ++i)
            occurrences[str[i] - 'a']++;

        for (int i = 0; i < 26; ++i)
        {
            if (occurrences[i] > maxCount)
            {
                maxCount = occurrences[i];
                maxChar = i + 'a';
            }
        }

        return maxChar;
    }
};

class Solution2
{
public:
    char getMaxOccuringChar(string str)
    {
        map<char, int> storeCharOccurrences;
        int i = 0;
        while (i < str.length())
        {
            storeCharOccurrences[str[i++]]++;
        }

        int maxResult = 0;
        char maxChar;

        for (auto i : storeCharOccurrences)
        {
            if (i.second > maxResult)
                maxChar = i.first, maxResult = i.second;
        }

        return maxChar;
    }
};

int main()
{
    Solution1 sol1;
    string s = "testsample";

    cout << sol1.getMaxOccuringChar(s) << endl;

    return 0;
}
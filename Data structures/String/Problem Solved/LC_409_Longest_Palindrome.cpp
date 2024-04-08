#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> charFrequency;
        bool isSingleCharacterAvailable = false;
        bool isOddElementAvailable = false;
        int result = 0;

        for (auto i : s)
        {
            charFrequency[i]++;
        }

        for (auto i : charFrequency)
        {
            if (!isSingleCharacterAvailable && i.second == 1)
                isSingleCharacterAvailable = true;
            else if (i.second & 1)
            {
                result += i.second - 1;
                isOddElementAvailable = true;
            }
            else
                result += i.second;
        }

        return (isSingleCharacterAvailable || isOddElementAvailable) ? result + 1 : result;
    }
};

class Solution2
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> charFrequency;
        int oddCnt = 0;
        int result = 0;

        for (auto i : s)
            charFrequency[i]++;

        for (auto i : charFrequency)
        {
            if (i.second & 1)
            {
                ++oddCnt;
                result += (oddCnt == 1) ? i.second : i.second - 1;
            }
            else
                result += i.second;
        }

        return result;
    }
};

class Solution3
{
public:
    int longestPalindrome(string s)
    {

        unordered_map<char, int> charStore;
        int oddCnt = 0;

        for (auto i : s)
        {
            charStore[i]++;
            if (charStore[i] & 1)
                ++oddCnt;
            else
                --oddCnt;
        }

        return (oddCnt > 1) ? s.size() - oddCnt + 1 : s.size();
    }
};

int main()
{

    return 0;
}
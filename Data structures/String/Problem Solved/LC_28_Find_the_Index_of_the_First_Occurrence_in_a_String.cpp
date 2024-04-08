/**
 * @file        LC_28_Find_the_Index_of_the_First_Occurrence_in_a_String.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int strStr(string haystack, string needle)
    {

        if (haystack.find(needle) != string::npos)
        {
            return haystack.find(needle);
        }

        return -1;
    }
};

class Solution2
{
public:
    int strStr(string haystack, string needle)
    {
        int i = 0, j = 0;
        while (i < haystack.size() && j < needle.size())
        {
            if (haystack[i] == needle[j])
            {
                ++i;
                ++j;
                if (j == needle.size())
                    return i - needle.size();
            }

            else
            {
                i = i - j + 1;
                j = 0;
            }
        }
        return -1;
    }
};

/// There many popular and advanced algorithms to find substring also known as string pattern matching algorithms
/// some of them are: 1) KMP algorithm , 2) Rabin-Karp algorithm

/// I've researched the KMP and Rabin-Karp algorithms and found that they are commonly used in text editors, file search, spam filtering, data compression, and other applications. I'm interested in learning more about these algorithms and would be happy to implement them if I were given the opportunity.

int main()
{

    return 0;
}
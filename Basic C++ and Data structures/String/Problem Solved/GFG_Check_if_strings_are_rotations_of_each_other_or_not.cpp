/**
 * @file        GFG_Check_if_strings_are_rotations_of_each_other_or_not.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
class Solution1
{
public:
    /// T.C => O(N*N)
    /// S.C => O(1)
    bool areRotations(string s1, string s2)
    {
        if (s1.size() != s2.size())
            return false;
        int size = s1.size();

        for (int i = 0; i < size; ++i)
        {
            if (s1[i] == s2[0])
            {
                bool isRotated = true;
                for (int j = 0; j < size; ++j)
                {
                    if (s2[j] != s1[(i + j) % size])
                    {
                        isRotated = false;
                        break;
                    }
                }

                if (isRotated)
                    return true;
            }
        }

        return false;
    }
};

/// Optimal soultion
class Solution2
{
public:
    bool areRotations(string s1, string s2)
    {
        /// concatenate two strings
        s1 += s1;

        /// check if s2 available in s1 as substring
        /// the find method looks for s2, if s2 is
        /// found then it'll be return a positive number
        /// otherwise, find method returns a constant value string:npos indicates s2 not found in s1
        return (s1.find(s2) != string::npos);
    }
};

int main()
{

    return 0;
}
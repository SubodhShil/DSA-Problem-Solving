/**
 * @file            LC_1047_Remove_All_Adjacent_Duplicates_In_String.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-27
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string result = "";
        for (auto ch : s)
        {
            if (result.back() == ch)
            {
                result.pop_back();
            }
            else
            {
                result.push_back(ch);
            }
        }

        return result;
    }
};

int main()
{

    return 0;
}
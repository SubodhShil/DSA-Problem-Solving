/**
 * @resource: https://github.com/Turingfly/cracking-the-coding-interview/blob/master/src/chapter01ArraysAndStrings/Urlify.java
 * Problem: Write a method to replace all spaces in a string with '%20 You may
 * assume that the string has sufficient space at the end to hold the additional
 * characters, and that you are given the "true" length of the string. (Note: if
 * implementing in Java, please use a character array so that you can perform
 * this operation in place.) EXAMPLE Input: "Mr John Smith     ", 13 Output:
 * "Mr%20John%20Smith"
 *
 * Solution: Start from the end and work backwards
 */

#include <bits/stdc++.h>
using namespace std;

/// Optimized solution
/// always start from end if you're modifying string by adding new characters
class Solution1
{

public:
    string replaceSpaces(char str[], int previousSize)
    {
        if (str == nullptr)
            return "";

        int spaceCnt = 0;

        for (int i = 0; i < previousSize; ++i)
        {
            if (str[i] == ' ')
            {
                ++spaceCnt;
            }
        }

        /// since %20 takes up 3 characters, but we're replacing one character with three
        /// so we have to multiply with 2 here
        // int newStringSize = previousSize + spaceCnt * 2;
        // int newStringLast = newStringSize - 1;

        /// direct way to find newStringLast position
        int newStringLast = previousSize - 1 + spaceCnt * 2;

        for (int i = previousSize - 1; i >= 0; --i)
        {
            if (str[i] == ' ')
            {
                str[newStringLast] = '0';
                str[newStringLast - 1] = '2';
                str[newStringLast - 2] = '%';
                newStringLast -= 3;

                // decrease space counter
                --spaceCnt;
            }
            else
            {
                /// shifting elements to right and
                /// saves up space for %20
                str[newStringLast--] = str[i];
            }

            if (spaceCnt == 0)
                break;
        }

        return str;
    }
};

int main()
{
    char str[] = "He She  ";
    // char str[] = "Abc def ghi    ";

    Solution1 sol1;
    cout << sol1.replaceSpaces(str, 6) << endl; // string 1
    // cout << sol1.replaceSpaces(str, 11) << endl; // string 2

    return 0;
}
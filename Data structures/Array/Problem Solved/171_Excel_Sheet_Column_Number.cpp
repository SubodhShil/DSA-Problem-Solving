/**
 * @file 171_Excel_Sheet_Column_Number.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-04
 * @link: https://leetcode.com/problems/excel-sheet-column-number/description/
 *
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int titleNumber = 0;
        // for (int i = columnTitle.size(); i > 0; i--)
        // {
        //     titleNumber += ((columnTitle[i - 1] - 'A' + 1) * pow(26, columnTitle.size() - i));
        // }

        for (auto &i : columnTitle)
        {
            titleNumber = (titleNumber * 26) + (i - 'A' + 1);
        }

        return titleNumber;
    }
};

int main()
{
    string s = "AB";
    Solution sol;
    cout << sol.titleToNumber(s) << endl;

    return 0;
}
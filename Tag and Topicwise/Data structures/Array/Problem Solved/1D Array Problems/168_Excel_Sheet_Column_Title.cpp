/**
 * @file 168_Excel_Sheet_Column_Title.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-04
 * @link: https://leetcode.com/problems/excel-sheet-column-title/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string columnTitle = "";
        while (columnNumber)
        {
            columnTitle.push_back('A' + (columnNumber - 1) % 26);
            columnNumber = (columnNumber - 1) / 26;
        }

        reverse(columnTitle.begin(), columnTitle.end());
        return columnTitle;
    }
};

int main()
{
    int number = 701;

    Solution sol;
    cout << sol.convertToTitle(number);

    return 0;
}
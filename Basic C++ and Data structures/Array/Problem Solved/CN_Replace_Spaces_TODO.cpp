/**
 * @file            3_CN_Replace_Spaces.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-22
 * @resources:      https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?leftPanelTab=1
 * @verdict:        This question may appear in interview with 'URLify string' tag where
 *                  you've to replace spaces with %20
 */

#include <bits/stdc++.h>
using namespace std;

/// bruteforce solution
class Solution1
{
public:
    string replaceSpaces(string &str)
    {
        /// taking extra string
        string result = "";

        for (auto i : str)
        {
            if (i == ' ')
            {
                result.push_back('@');
                result.push_back('4');
                result.push_back('0');
            }
            else
                result.push_back(i);
        }

        return result;
    }
};

class Solution2
{
};

int main()
{
    string s = "Coding Ninjas India";

    // Solution1 sol1;
    // cout << sol1.replaceSpaces(s);

    cout << endl;

    return 0;
}
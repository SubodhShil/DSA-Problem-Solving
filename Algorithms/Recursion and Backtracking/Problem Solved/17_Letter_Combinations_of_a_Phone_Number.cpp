/*
 * Link 1: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
 * Link 2: https://www.codingninjas.com/codestudio/problems/possible-words-from-a-phone-number_1094907?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    void solve(string digits, string output, int index, vector<string> &ans, vector<string> mapping)
    {
        //* base case
        if (index >= digits.size())
        {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.size(); i++)
        {
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        int index = 0;
        vector<string> ans;

        if (digits.size() == 0)
            return ans;

        string output;
        vector<string> mapping{" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, output, index, ans, mapping);

        return ans;
    }
};
/**
 * @file        GFG_Binary_String.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    long binarySubstring(int n, string s)
    {
        const long cntOne = count(begin(s), end(s), '1');
        return cntOne * (cntOne - 1) / 2;
    }
};

int main()
{
    Solution1 sol1;
    string s = "1111";
    cout << sol1.binarySubstring(4, s) << endl;

    return 0;
}
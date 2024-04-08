/**
 * @file        LC_1299_Replace_Elements_with_Greatest_Element_on_Right_Side.cpp
 * @author      Subodh Chandra Shil
 * @link        https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> result(n, -1);

        for (int i = n - 2; i >= 0; --i)
        {
            int maxVal = max(arr[i + 1], result[i + 1]);
            result[i] = maxVal;
        }

        return result;
    }
};

int main()
{

    return 0;
}
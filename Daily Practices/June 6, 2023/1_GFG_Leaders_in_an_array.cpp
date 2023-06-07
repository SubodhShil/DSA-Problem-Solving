/**
 * @file        GFG_Leaders_in_an_array.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-04
 * @resources:  https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
 *              https://www.codingninjas.com/codestudio/problems/superior-elements_6783446?leftPanelTab=1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leaders(int a[], int n)
    {
        int current_max_ele = INT32_MIN;
        vector<int> result;

        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] >= current_max_ele)
            {
                current_max_ele = a[i];
                result.push_back(current_max_ele);
            }
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

int main()
{

    return 0;
}
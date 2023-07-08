/**
 * @file        2_GFG_Find_Missing_And_Repeating.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-14
 * @resources:  https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        vector<int> hash(n + 1, 0);
        vector<int> result;

        for (int i = 0; i < n; ++i)
        {
            hash[arr[i]]++;
        }

        for (int i = 1; i < hash.size(); ++i)
        {
            if (hash[i] > 1)
            {
                result.insert(result.begin(), i);
            }
            if (hash[i] == 0)
                result.push_back(i);
        }

        return result;
    }
};
int main()
{

    return 0;
}
/**
 * @file        GFG_Union_of_Two_Sorted_Arrays.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-18
 */

#include <bits/stdc++.h>
using namespace std;

/// Given two array, you have to find the union but can't contain any duplicates

/// Bruteforce solution
/// time complexity: O()
/// space complexity: O()
class Solution1
{
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> result;

        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (arr1[i] == arr2[j])
            {
                if (arr1[i] != arr1[i - 1])
                    result.push_back(arr1[i]);
                ++i, ++j;
            }

            else if (arr1[i] > arr2[j])
            {
                if (arr2[j] != arr2[j - 1])
                    result.push_back(arr2[j]);

                ++j;
            }

            else
            {
                if (arr1[i] != arr1[i - 1])
                    result.push_back(arr1[i]);

                ++i;
            }
        }

        while (i < n)
        {
            if (arr1[i] != arr1[i - 1] || arr1[i] != result.back())
                result.push_back(arr1[i]);
            ++i;
        }

        while (j < m)
        {
            if (arr2[j] != arr2[j - 1] || arr2[j] != result.back())
                result.push_back(arr2[j]);
            ++j;
        }

        return result;
    }
};

int main()
{
    // int arr1[] = {1, 1, 2, 3, 4};
    // int arr1[] = {1, 1, 2, 3, 4};

    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[] = {1, 2, 3};

    // int arr1[] = {1, 1, 1, 1, 1};
    // int arr2[] = {2, 2, 2, 2, 2};

    // int arr1[] = {2, 2};
    // int arr2[] = {2, 2};

    // Solution1 sol1;
    // sol1.findUnion(arr1, arr2, 2, 2);

    return 0;
}
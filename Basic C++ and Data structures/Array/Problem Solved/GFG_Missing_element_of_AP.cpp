/**
 * @file GFG_Missing_element_of_AP.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-04
 * @source: https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=2&difficulty[]=0&status[]=solved&category[]=Arrays&sortBy=submissions
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /// boundary elements are not missing
    /// sum of AP = (n/2) * (a + l)
    /// nth term of AP = a + (n - 1)d
    /// AP common difference: d = (last_term - first_term) / (n - 1)

    int findMissing(int arr[], int n)
    {
        /// the original formula is d = (last_term - first_term) / (n - 1)
        /// but we've used  d = (last_term - first_term) / n
        /// because we've an extra element so here the total term is n = N + 1
        /// as per formula we have to n - 1 = N + 1 - 1 = N
        int diff = (arr[n - 1] - arr[0]) / n;
        int nextElement = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != nextElement)
                return nextElement;

            else
                nextElement += diff;
        }
    }

    /// TODO binary search approach
    int findMissing2(int arr[], int n)
    {
    }
};

int main()
{
    int arr[]{2, 4, 8, 10, 12, 14};
    Solution sol1;
    cout << sol1.findMissing(arr, 6) << endl;

    return 0;
}

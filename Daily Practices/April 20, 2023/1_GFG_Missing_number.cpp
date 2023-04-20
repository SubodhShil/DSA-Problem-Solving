/**
 * @file        GFG_Missing_number.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-20
 * @resource:   https://practice.geeksforgeeks.org/problems/missing-number4257/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions
 *              https://leetcode.com/problems/missing-number/description/
 */

#include <bits/stdc++.h>
using namespace std;

/// bruteforce solution
int missingNumber_bruteforce(int a[], int N)
{
    for (int i = 1; i <= N; i++)
    {

        bool isFound = 0;

        for (int j = 0; j < N - 1; j++)
        {
            if (a[j] == i)
            {

                isFound = 1;
                break;
            }
        }

        if (!isFound)
            return i;
    }

    return -1;
}

int missingNumber(int A[], int N)
{
    int sum = N * (N + 1) / 2;

    int arraySum = 0;
    for (int i = 0; i < N - 1; ++i)
        arraySum += A[i];

    return sum - arraySum;
}

/// Optimal solution: bit manipulation
int missingNumber(int A[], int N)
{
    int ans = 0;

    for (int i = 0; i < N - 1; ++i)
        ans ^= A[i];
    for (int i = 1; i <= N; ++i)
        ans ^= i;

    return ans;
}

int main()
{
    int arr[] = {1, 4, 3};
    cout << missingNumber(arr, 4) << endl;

    return 0;
}
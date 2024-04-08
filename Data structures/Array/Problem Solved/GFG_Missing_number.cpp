/**
 * @file        GFG_Missing_number.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-20
 * @resource:   https://practice.geeksforgeeks.org/problems/missing-number4257/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions
 */

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    int sum = N * (N + 1) / 2;

    int arraySum = 0;
    for (int i = 0; i < N - 1; ++i)
        arraySum += A[i];

    return sum - arraySum;
}

int main()
{
    int arr[] = {1, 4, 3};
    cout << missingNumber(arr, 4) << endl;

    return 0;
}
/**
 * @file left_rotate_the_array_by_one_place.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-16
 * @problem_source: https://www.codingninjas.com/codestudio/problems/left-rotate-an-array-by-one_5026278
 */

#include <bits/stdc++.h>
using namespace std;

/// Solution 01
vector<int> rotateArray(vector<int> &arr, int n)
{
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        /// we're moving and placing elements toward left
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;
}

/// Solution 02
vector<int> rotateArray2(vector<int> &arr, int n)
{
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1 % n] = arr[i];
    }

    arr[n - 1] = temp;

    return arr;
}

int main()
{
    vector<int> A{17, 10, 22, -5};
    rotateArray2(A, 4);

    return 0;
}
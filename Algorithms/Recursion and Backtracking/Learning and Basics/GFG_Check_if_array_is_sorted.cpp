/*
                            ॐ ॐ
    * https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
    * Author: Subodh Chandra Shil
    * Tag: Recursion, Array, Sorting
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int arr[], int idx, int n, int lastElement)
    {
        if (idx >= n)
            return true;

        if (lastElement > arr[idx])
            return false;

        return check(arr, idx + 1, n, arr[idx]);
    }

    bool arraySortedOrNot(int arr[], int n)
    {
        return check(arr, 0, n, arr[0]);
    }
};

int main()
{

    return 0;
}
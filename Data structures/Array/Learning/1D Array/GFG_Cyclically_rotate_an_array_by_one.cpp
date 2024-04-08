/**
 * @file        GFG_Cyclically_rotate_an_array_by_one.cpp
 * @author      Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    void rotate(int arr[], int n)
    {
        int lastElement = arr[n - 1];
        for (int i = n - 1; i >= 1; --i)
            arr[i] = arr[i - 1];

        arr[0] = lastElement;
    }
};

class Solution2
{
public:
    void rotate(int arr[], int n)
    {
        for (int i = 1; i < n; ++i)
        {
            swap(arr[0], arr[i]);
        }
    }
};

int main()
{

    return 0;
}
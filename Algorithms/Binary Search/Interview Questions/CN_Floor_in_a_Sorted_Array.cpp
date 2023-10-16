/**
 * @file        CN_Floor_in_a_Sorted_Array.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://www.codingninjas.com/studio/problems/find-floor-value_624787
 */

#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int> arr, int n, int x)
{
    int ans = -1;
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] <= x)
        {
            ans = mid;
            start = mid + 1;
        }

        else
            end = mid - 1;
    }

    return ans;
}

int main()
{

    return 0;
}
/**
 * @file            GFG_Number_of_occurrence.cpp
 * @author          Subodh Chandra Shil
 * @link            https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstOccurrence(int arr[], int n, int x)
    {
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x)
            {
                if (arr[mid] != arr[mid - 1])
                    return mid;
                else if (arr[mid] == arr[mid - 1])
                {
                    end = mid - 1;
                }
            }
            else if (arr[start] > arr[end] && x > arr[mid] 
            ||       arr[start] < arr[end] && x < arr[mid])
            {
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return -1;
    }

    int lastOccurrence(int arr[], int n, int x)
    {
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x)
            {
                if (arr[mid] != arr[mid + 1])
                    return mid;
                else if (arr[mid] == arr[mid + 1])
                {
                    start = mid + 1;
                }
            }
            else if (arr[start] > arr[end] && x > arr[mid] 
            ||       arr[start] < arr[end] && x < arr[mid])
            {
                end = mid - 1;
            }
            else
                start = mid + 1;
        }

        return -1;
    }

    int count(int arr[], int n, int x)
    {
        int cnt1 = firstOccurrence(arr, n, x);
        int cnt2 = lastOccurrence(arr, n, x);

        if(cnt1 == -1 || cnt2 == -1)
            return 0;
        if(cnt1 == cnt2)
            return 1;
        else 
            return (cnt2 - cnt1 + 1);
    }
};

int main()
{

    return 0;
}
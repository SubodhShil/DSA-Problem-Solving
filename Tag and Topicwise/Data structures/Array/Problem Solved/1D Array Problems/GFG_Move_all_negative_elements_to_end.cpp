/**
 * @file GFG_Move_all_negative_elements_to_end.cpp
 * @author Subodh Chandra Shil
 * @question_link: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?page=2&difficulty[]=0&category[]=Arrays&sortBy=submissions
 * @date 2023-04-06

 */

#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{
    int resultArray[n];
    int cnt = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            resultArray[cnt++] = arr[i];

    for (int j = 0; j < n; j++)
        if (arr[j] < 0)
            resultArray[cnt++] = arr[j];

    for (int i = 0; i < n; i++)
        arr[i] = resultArray[i];
}

void segregateElements2(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    /**
     *  {1, -1, 3, 2, -7, -5, 11, 6 }
     *  four combinations:
     *  Left    ||     Right
     *  +ve             -ve     -> move
     *  -ve             +ve     -> swap and move
     *  +ve             +ve     -> move only left
     *  -ve             -ve     -> move only right
     */

    while (left <= right)
    {
        if (arr[left] > 0 && arr[right] < 0)
            left++, right--;
        else if (arr[left] < 0 && arr[right] > 0)
            swap(arr[left++], arr[right--]);
        else if (arr[left] > 0 && arr[right] > 0)
            left++;
        else
            right--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    // int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int arr[] = {-5, 7, -3, -4, 9, 10, -1, 11};
    // segregateElements2(arr, 8);
    segregateElements(arr, 8);

    return 0;
}
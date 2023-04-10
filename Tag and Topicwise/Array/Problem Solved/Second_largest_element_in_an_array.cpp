/**
 * @file Second_largest_element_in_an_array.cpp
 * @author Subodh Chandra Shil
 * @description:    You're given an unsorted array find
 *                  the second largest element in the array
 * @problem_source: https://practice.geeksforgeeks.org/problems/second-largest3735/1
 * @date 2023-04-10
 */

#include <bits/stdc++.h>
using namespace std;

/// Good -> O(N Log N)
int findSecondLargestBrute(vector<int> &arr)
{
    sort(begin(arr), end(arr));
    int largest = arr[arr.size() - 1];

    /// if there any largest element has duplicate of it
    /// may produce wrong answer
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (largest != arr[i])
        {
            return arr[i];
        }
    }

    return -1;
}

/// Better -> O(2N)
int findSecondLargestBetter1(vector<int> &arr)
{
    int largestElement = *max_element(arr.begin(), arr.end());
    int secondLargestElement = -1;

    for (int i = 0; i < arr.size(); i++)
        if (secondLargestElement < arr[i] && secondLargestElement != largestElement)
            secondLargestElement = arr[i];

    return secondLargestElement;
}

/// Optimal -> O(N)
int findSecondLargestOptimal(vector<int> &arr)
{
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }

        else if (largest > arr[i] && secondLargest < arr[i])
            secondLargest = arr[i];

        return secondLargest;
    }
}

int main()
{
    vector<int> arr{1, 2, 4, 5, 7, 7};
    cout << findSecondLargestBrute(arr) << endl;

    return 0;
}
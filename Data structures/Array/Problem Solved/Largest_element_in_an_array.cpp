/**
 * @file Largest_element_in_an_array.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-10
 * @description:    You're given an unsorted array
 *                  find the largest element in the array
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce -> Good -> O(N Log N)
int findLargestBrute(vector<int> &arr)
{
    /// after sorting the array (ascending)
    /// the last element is the largest element
    sort(begin(arr), end(arr));
    return arr[arr.size() - 1];
}

/// Better -> O(N)
int findLargestBetter(vector<int> &arr)
{
    /// assuming the first element is largest
    int largestElement = arr[0];

    for (auto i : arr)
    {
        if (i > largestElement)
            largestElement = i;
    }

    return largestElement;
}

int main()
{
    vector<int> arr{3, 2, 1, 5, 2};

    return 0;
}
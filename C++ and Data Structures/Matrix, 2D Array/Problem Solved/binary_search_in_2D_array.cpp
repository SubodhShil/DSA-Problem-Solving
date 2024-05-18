/**
 * @file        1_binary_search_in_2D_array.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-13
 * @resources:  https://leetcode.com/problems/search-a-2d-matrix/description/
 *              https://youtu.be/1CdolnvxLs0
 */

#include <bits/stdc++.h>
using namespace std;

/*
    Edge case:
        1) If the interviewer says the 2D array is unsorted then sort it first!!!
        2) In this leetcode question it says to return the boolean value whether it available.
           If your interviewer says to return the index where it found the return mid and in
           case not found return -1

    To binary search in a 2D array, firstly depict the array into a 1D array
    total number of elements = m x n, m = row and n = column
    last index of the array = m x n - 1
    first index = 0

    to find the row number = current_element_index / column_size
    to find the col number = current_element_index % column_size
*/

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &arr, int target)
    {
        int row = arr.size();
        int col = arr[0].size();
        int start = 0, end = row * col - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            int currentElementRow = mid / col;
            int currentElementCol = mid % col;
            int currentElement = arr[currentElementRow][currentElementCol];

            if (currentElement == target)
            {
                return 1;
            }

            else if (currentElement < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return 0;
    }
};

int main()
{

    return 0;
}
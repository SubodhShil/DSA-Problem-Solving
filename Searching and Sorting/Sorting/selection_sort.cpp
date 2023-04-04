#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSortAscending(vector<int> &arr)
{
    int size = arr.size();

    /**
     * step 1: find the samllest element
     * step 2: swap the element with
     */

    int current_smallest_element_index = 0; /// assuming first element is the smallest

    for (int i = 0; i < size - 1; i++)
    {
        current_smallest_element_index = i;

        /// the for loop finds the smallest element after 'i'
        /// Find the index of the smallest element in the remaining unsorted part of the array
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[current_smallest_element_index])
                current_smallest_element_index = j;
        }

        /// Only swap if the current element is not the smallest
        if (current_smallest_element_index != i)
            swap(arr[i], arr[current_smallest_element_index]);
    }

    return arr;
}

vector<int> selectionSortDescending(vector<int> &arr)
{
    int size = arr.size();
    int current_biggest_element_index = 0;

    for (int i = 0; i <= size - 2; i++)
    {
        current_biggest_element_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[current_biggest_element_index])
                current_biggest_element_index = j;
        }

        if (current_biggest_element_index != i)
            swap(arr[current_biggest_element_index], arr[i]);
    }

    return arr;
}

int main()
{
    vector<int> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // selectionSortAscending(v);
    selectionSortDescending(v);

    for (auto i : v)
        cout << i << " ";

    return 0;
}
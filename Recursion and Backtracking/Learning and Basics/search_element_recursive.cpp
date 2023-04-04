#include <bits/stdc++.h>
using namespace std;

/// this function search for an element
/// in the entire array
int linearSearchIsFound(int arr[], int size, int search_key)
{
    //* base case
    if (size == 0)
        return false;
    if (arr[0] == search_key)
        return true;

    return linearSearchIsFound(arr + 1, size - 1, search_key);
}

/// this function search for an element after
/// a given position
int search_element_after_given_position(int arr[], int size, int index, int search_key)
{
    //* base case
    if (index == size - 1 && arr[index] != search_key)
        return -1;

    if (arr[index] == search_key)
        return index;

    return linearSearchRecursive(arr, size, index + 1, search_key);
}

int main()
{
    int arr[]{5, 167, 77, 33, 15, -2423};
    int key = 33;

    // cout << search_element_after_given_position(arr, 6, 4, key);
    cout << search_element_after_given_position(arr, 6, 3, key);
    // (linearSearchIsFound(arr, 6, key)) ? cout << key << " is Present in your array\n" : cout << key << " isn't present in your array\n";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int linearSearchIterative(int arr[], int size, int search_key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == search_key)
            return i;

    return -1;
}

int linearSearchRecursive(int arr[], int size, int index, int search_key)
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
    cout << "Enter the size for the array: ";
    int size;
    cin >> size;

    int *arr = new int[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter search key: ";
    int search_key;
    cin >> search_key;

    //* linear search iterative
    (linearSearchIterative(arr, size, search_key) == -1) ? cout << "No results\n" : cout << search_key << " found at position: " << linearSearchIterative(arr, size, search_key) << endl;

    //* lienar search recursive
    (linearSearchRecursive(arr, size, 0, search_key) == -1) ? cout << "No results" : cout << search_key << " found at position: " << linearSearchRecursive(arr, size, 0, search_key) << endl;

    return 0;
}
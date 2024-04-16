#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter size for the dynamic array: ";
    int size, new_size;
    cin >> size;

    /// dynamic array with assigned value
    // int *arr = new int[5]{1, 2, 3, 4, 5};

    int *dynamicArray = new int[size];

    /// initialize value
    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i)
        cin >> dynamicArray[i];

    /// printing the array
    cout << "Before resize: ";
    for (int i = 0; i < size; ++i)
        cout << dynamicArray[i] << ' ';

    /// expand size
    cout << "\nEnter new size: ";
    cin >> new_size;
    dynamicArray = static_cast<int *>(realloc(dynamicArray, new_size * sizeof(int)));

    cout << "Enter remaining new values for the array: ";
    for (int i = size; i < new_size; ++i)
    {
        cin >> dynamicArray[i];
    }

    cout << "After resizing: ";
    for (int i = 0; i < new_size; ++i)
        cout << dynamicArray[i] << ' ';

    return 0;
}
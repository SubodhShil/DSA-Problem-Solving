#include <bits/stdc++.h>
using namespace std;

int main()
{

    /// The new keyword is an indicator to storing variables into heap memory. Any variable created with the 'new' keyword will allocate memory in heap and then return a memory address. To receive that address we have to take it into a pointer variable.

    int *ptr = new int;
    *ptr = 100;

    cout << ptr << endl;
    cout << *ptr << endl;

    /// creating dynamic size array with 'new' keyword
    int size;
    cout << "Enter size: ";
    cin >> size;

    int *arr = new int[size];
    cout << "Enter array elements: ";

    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ' ';
    }

    /// deleting allocated memory or array size
    delete[] arr;

    return 0;
}
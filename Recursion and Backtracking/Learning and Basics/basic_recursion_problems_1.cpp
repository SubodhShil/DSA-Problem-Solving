#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    //* base case
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    return isSorted((arr + 1), size - 1);
}

int sumOfArray(int arr[], int size, int start = 0)
{
    //* base case
    if (start == size)
        return 0;
    int sum = arr[start] + sumOfArray(arr, size, start + 1);

    return sum;
}

int sumOfArray2(int arr[], int size)
{
    //* base case
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int sum = arr[0] + sumOfArray2(arr + 1, size - 1);

    return sum;
}

int main()
{
    int arr[]{1, 2, 3, 4, 5};
    // (isSorted(arr, 4)) ? cout << "Sorted\n" : cout << "Not sorted\n";
    // cout << sumOfArray(arr, 4, 0);
    cout << sumOfArray2(arr, 5);

    return 0;
}
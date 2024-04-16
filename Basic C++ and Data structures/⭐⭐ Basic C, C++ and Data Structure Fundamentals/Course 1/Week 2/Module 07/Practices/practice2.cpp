#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// array initialization

    /// if you're initialized with a list of value, then the size is not required. But providing the size won't be a blunder.
    int arr[] = {5, 10, -3, 11, 20};
    // int arr[5] = {5, 10, -3, 11, 20};

    /// initialize all array elements with value 0
    int arr2[1000] = {0};

    /// providing a single value other than '0' will only initialize the first array element with that value and all other elements will be filled up with value '0'.
    /// only arr3[0] = 200 and other value will 0
    int arr3[100]{200};

    return 0;
}
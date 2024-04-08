#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int arr2[10] = {0};
    copy(arr, arr + 5, arr2);
    arr[5] = 6, arr[6] = 7, arr[7] = 8, arr[8] = 9, arr[9] = 10;

    for (int i = 0; i < 10; ++i)
        cout << arr[i] << ' ';

    return 0;
}
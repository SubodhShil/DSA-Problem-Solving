#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int size = 1000;
    /// initialized all elements with value '0'
    int arr[size] = {0};

    int arr2[5] = {10, 2023, 5, 9, -3};
    cout << arr2 << endl;
    cout << (&arr2[0]) << endl;

    /// here only array name represents the address of that element
    /// by dereferencing the address we can get the value at the position
    printf("%d\n", *(arr2));

    /// try to understand the difference between the following snippets
    printf("%d\n", *(arr2 + 4));
    printf("%d\n", *arr2 + 4);

    int x[3] = {10, 20, 30};
    printf("%d\n", *x + 2);
    printf("%d\n", x[0] + *(x + 1));

    return 0;
}
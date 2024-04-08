/// link: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    /// save the first element
    int temp = arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        int temp2 = arr[i];
        arr[i] = temp;
        temp = temp2;
    }
}

int main()
{
    int arr[]{1, 2, 3, 4, 5};
    rotate(arr, 5);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
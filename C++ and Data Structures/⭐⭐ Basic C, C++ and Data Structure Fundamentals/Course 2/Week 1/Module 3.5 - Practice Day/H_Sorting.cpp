#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    /// sorting
    for (int i = 0; i < n - 1; ++i)
    {
        int lowIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[lowIndex] > arr[j])
                lowIndex = j;
        }
        swap(arr[i], arr[lowIndex]);
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}
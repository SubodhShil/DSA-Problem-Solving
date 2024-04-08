#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextGreatest(int arr[], int n)
    {
        int greatest = -1;

        for (int i = n - 1; i >= 0; i--)
        {
            int temp = arr[i];
            arr[i] = greatest;
            greatest = max(temp, arr[i]);
        }

        for (int i = 0; i < n; ++i)
            cout << arr[i] << ' ';
    }
};

int main()
{
    // int arr[] = {16, 17, 4, 3, 5, 2};
    // int arr[] = {2, 3, 1, 9};
    int arr[] = {17, 33, -1, 5, 33, 99, 11};

    Solution s;
    s.nextGreatest(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}
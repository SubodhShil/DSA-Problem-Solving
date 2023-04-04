#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /// reverse the array from an index 'm'
    void reverseArray(vector<int> &arr, int m)
    {
        //* 2-poniter (index pointer) approach
        int array_size = arr.size();
        int left = m;
        int right = array_size - 1;

        while (left <= right)
        {
            swap(arr[left++], arr[right--]);
        }

        for (int i : arr)
            cout << i << " ";
    }
};

int main()
{
    Solution op;
    // vector<int> arr{10, 9, 8, 7, 6};
    vector<int> arr{553, 7, 11, -99, 35, 0};
    op.reverseArray(arr, 0);

    return 0;
}
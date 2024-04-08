/*
                            ॐ ॐ
    * https://www.geeksforgeeks.org/search-almost-sorted-array/
    * Author: Subodh Chandra Shil
    * Tag: Binary Search
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findInNearlySortedArray(vector<int> &arr, int target)
    {
        int n = arr.size();
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
                return mid;
            if (mid + 1 <= end && arr[mid + 1] == target)
                return mid + 1;
            if (mid - 1 >= 0 && arr[mid - 1] == target)
                return mid - 1;

            else if (arr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        return -1;
    }
};

int main()
{
    Solution sol1;
    // vector<int> arr{3, 2, 10, 4, 40};
    // vector<int> arr{5, 10, 30, 20, 40};
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    cout << sol1.findInNearlySortedArray(arr, 80) << endl;
    return 0;
}
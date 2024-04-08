// https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        //* binary search variables
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            //* check if mid index has the target element
            if (arr[mid] == target)
                return mid;

            //^ mid divides the array into two portions
            // from middle where we should check for sorted portion

            //* check whether left portion is sorted
            else if (arr[mid] > arr[start])
            {
                // * check whether target is on the left sorted portion
                if (target >= arr[start] && target < arr[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }

            else
            {
                if (target <= arr[end] && target > arr[mid])
                    start = mid + 1;
                else
                    end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return -1;
    }
};

int main()
{
    Solution op;
    vector<int> arr{4, 5, 6, 7, 0, 1, 2};
    cout << "Position is: " << op.search(arr, 0) << endl;

    return 0;
}
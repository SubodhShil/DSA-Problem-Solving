#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int binarySearchRecursive(vector<int> &arr, int start, int end, int search_key)
    {
        int mid = start + (end - start) / 2;
        if (start <= end)
        {
            if (arr[mid] == search_key)
                return mid;
            else if (search_key > arr[mid])
                return binarySearchRecursive(arr, mid + 1, end, search_key);
            else
                return binarySearchRecursive(arr, start, mid - 1, search_key);
        }
        return -1;
    }
};

class Solution2
{
public:
    int binarySearchRecursive(vector<int> arr, int start, int end, int target)
    {
        /// base case
        if (start > end)
            return -1;

        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            return binarySearchRecursive(arr, start, mid - 1, target);
        else
            return binarySearchRecursive(arr, mid + 1, end, target);
    }
};

int main()
{
    Solution1 sol1;
    Solution2 sol2;
    vector<int> v{10, 20, 30, 40, 50, 60};

    cout << sol1.binarySearchRecursive(v, 0, v.size() - 1, 50);
    cout << endl;
    cout << sol2.binarySearchRecursive(v, 0, v.size() - 1, 50);

    return 0;
}
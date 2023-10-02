#include <bits/stdc++.h>
using namespace std;

/// deciding factor: determine what order the sorted array maintains

vector<int> arr{55, 23, 21, 15, 3, 2};
// vector<int> arr{1, 2, 3, 4, 5};

class Implementation1
{
public:
    int binarySearch()
    {
        int n = arr.size();
        int start = 0, end = n - 1;

        /// 0 -> ascending and 1 -> descending
        bool orderDirection = arr[start] > arr[end];
        int target = 3;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target)
                return mid;

            /// Descending order array
            if (orderDirection)
            {
                if (arr[mid] > target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            /// Ascending order array
            else
            {
                if (arr[mid] > target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }

        return -1;
    }
};

class Implementation2
{
public:
    int binarySearch()
    {
        int n = arr.size();
        int start = 0, end = n - 1;
        int target = 2;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
                return mid;
            else if ((arr[mid] > target && arr[start] > arr[end]) || (arr[mid] < target && arr[start] < arr[end]))
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
};

int main()
{
    // Implementation1 imp1;
    Implementation2 imp2;
    cout << imp2.binarySearch() << endl;

    return 0;
}
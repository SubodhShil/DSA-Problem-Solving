/**
 * @file            GFG_Elements_in_the_Range.cpp
 * @author          Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    bool check_elements(int arr[], int n, int A, int B)
    {
        int countElementsInRange = B - A + 1;
        int digitCnt[countElementsInRange]{0};

        for (int i = 0; i < n; ++i)
        {
            /// map A-B range in 0 based index
            if (arr[i] >= A && arr[i] <= B)
            {
                int idx = arr[i] - A;
                digitCnt[idx]++;
            }
        }

        for (int i = 0; i < countElementsInRange; ++i)
        {
            if (digitCnt[i] == 0)
                return false;

            // cout << i + A << "\t" << digitCnt[i] << endl;
        }

        return true;
    }
};

class Solution2
{
public:
    /// Time complexity: O(nlogn + n)
    /// Auxiliary space complexity: O(1)
    bool check_elements(int arr[], int n, int A, int B)
    {
        sort(arr, arr + n);
        for (int i = 0; i < n; ++i)
        {
            if (A > B)
                return true;

            if (arr[i] == A)
                ++A;
        }

        return (A > B) ? 1 : 0;
    }
};

int main()
{
    int arr[] = {1, 4, 5, 2, 7, 8, 3};
    Solution1 sol1;
    cout << sol1.check_elements(arr, 7, 2, 6) << endl;

    return 0;
}
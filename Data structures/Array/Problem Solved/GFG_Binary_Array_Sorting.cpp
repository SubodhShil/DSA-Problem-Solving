/**
 * https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void binSort(int A[], int N)
    {
        /// taking two index pointers
        int left = 0;
        int right = N - 1;

        while (left <= right)
        {
            if (A[left] == 1 and A[right] == 0)
                swap(A[left++], A[right--]);
            else if (A[left] == 0 and A[right] == 0)
                left++;
            else if (A[left] == 1 and A[right] == 1)
                right--;
            else
                left++, right--;
        }
    }
};

int main()
{
    Solution sol;
    // int A[]{1, 0, 1, 1, 1, 1, 1, 0, 0, 0};
    int A[]{1, 0, 1, 1, 0};
    sol.binSort(A, 5);

    return 0;
}
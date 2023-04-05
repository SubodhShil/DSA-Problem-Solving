/// https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

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
            if (A[left] > A[right])
                swap(A[left++], A[right++]);
            else if ()
        }
    }
};

int main()
{

    return 0;
}
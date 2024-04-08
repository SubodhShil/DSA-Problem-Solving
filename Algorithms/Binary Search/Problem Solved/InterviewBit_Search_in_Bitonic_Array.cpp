#include <bits/stdc++.h>
using namespace std;

// Unique means values that exist only once in the dataset
// Distinct means values that are repeated several times.

int searchBitonic(vector<int> &A, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        /// trick to handle overflow
        int prev = (mid - 1) % n, next = (mid + 1) % n;

        if (A[mid] >= A[next] && A[mid] >= A[prev])
            return mid;
        if (A[mid] < A[mid - 1])
            start = mid + 1;
        else
            end = mid - 1;
    }
}

int searchLeftAscending(vector<int> &A, int start, int end, int B)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] == B)
            return mid;
        if (A[mid] > B)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

int searchRightDescending(vector<int> &A, int start, int end, int B)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] == B)
            return mid;
        if (A[mid] > B)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int solve(vector<int> &A, int B)
{
    int size = A.size();
    int bitonicPoint = searchBitonic(A, size);

    if (A[bitonicPoint] == B)
        return bitonicPoint;
    else
    {
        int leftResult = searchLeftAscending(A, 0, bitonicPoint - 1, B);
        int rightResult = searchRightDescending(A, bitonicPoint + 1, size - 1, B);

        if (leftResult != -1)
            return leftResult;
        if (rightResult != -1)
            return rightResult;
    }

    return -1;
}

int main()
{

    return 0;
}
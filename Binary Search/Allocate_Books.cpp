// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] + pageSum <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
    int start = 0, end = accumulate(arr.begin(), arr.end(), 0);
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (isPossibleSolution(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{

    return 0;
}
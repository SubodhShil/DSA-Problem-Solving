#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    long long maxSubarraySum(int arr[], int n)
    {
        long long sum = 0;
        long long maxSum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += arr[i];

            if (sum < 0)
                sum = 0;

            else
                maxSum = max(maxSum, sum);
        }

        return maxSum < 0 ? 0 : maxSum;
    }
};

class Solution2
{
public:
    void maxSubarrayIndex(int arr[], int n)
    {
        long long sum = 0;
        long long maxSum = 0;

        int startIndex = -1;
        int endIndex = -1;

        for (int i = 0; i < n; ++i)
        {
            int start;
            if (sum == 0)
                start = i;

            sum += arr[i];

            if (sum < 0)
                sum = 0;

            if (sum > maxSum)
            {
                maxSum = sum;
                startIndex = start, endIndex = i;
            }
        }

        cout << "Subarray start: " << startIndex << " "
             << " end: " << endIndex << endl;
    }
};

int main()
{
    Solution1 sol1;
    Solution2 sol2;

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    // int arr[] = {-3, -5, -6};

    cout << sol1.maxSubarraySum(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    sol2.maxSubarrayIndex(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}
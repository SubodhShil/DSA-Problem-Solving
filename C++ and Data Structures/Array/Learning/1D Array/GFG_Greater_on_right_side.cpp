#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextGreatest(int arr[], int n)
    {
        int greatest = -1;

        for (int i = n - 1; i >= 0; i--)
        {
            int temp = arr[i];
            arr[i] = greatest;
            greatest = max(temp, arr[i]);
        }

        for (int i = 0; i < n; ++i)
            cout << arr[i] << ' ';
    }
};

class Solution2
{
public:
    vector<int> nextGreatest(vector<int> arr)
    {
        vector<int> result;
        result.push_back(-1);
        int n = arr.size();
        int prev_max = arr[n - 1];

        for (int i = n - 2; i >= 0; --i)
        {
            result.push_back(prev_max);
            prev_max = max(prev_max, arr[i]);
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

int main()
{
    // int arr[] = {16, 17, 4, 3, 5, 2};
    // int arr[] = {2, 3, 1, 9};
    int arr[] = {17, 33, -1, 5, 33, 99, 11};

    Solution s;
    s.nextGreatest(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}
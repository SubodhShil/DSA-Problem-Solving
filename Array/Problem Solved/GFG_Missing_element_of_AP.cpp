/// TODO

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMissing(int arr[], int n)
    {
        int firstElement = arr[0];
        int lastElement = arr[n - 1];
        int diff = n;
        int d = (lastElement - firstElement) / diff;

        cout << d << endl;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] - arr[i + 1] != d)
            {
                return arr[i] + d;
            }
        }

        return -1;
    }
};

int main()
{
    int arr[]{2, 4, 8, 10, 12, 14};
    Solution sol1;
    cout << sol1.findMissing(arr, 6) << endl;

    return 0;
}
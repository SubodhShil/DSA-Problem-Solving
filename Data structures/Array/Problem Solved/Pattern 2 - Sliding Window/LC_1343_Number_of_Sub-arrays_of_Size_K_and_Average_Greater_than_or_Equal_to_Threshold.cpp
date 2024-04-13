#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        int n = arr.size(), i = 0, j = 0;
        int cntSubArray = 0;
        int sum = 0;

        while (i < n && j < n)
        {
            /// Condition agnostic work
            sum += arr[j];

            /// reach till the window size
            if (j - i + 1 == k)
            {
                if (sum / k >= threshold)
                    ++cntSubArray;

                sum -= arr[i];
                ++i;
            }

            ++j;
        }

        return cntSubArray;
    }
};

int main()
{

    return 0;
}
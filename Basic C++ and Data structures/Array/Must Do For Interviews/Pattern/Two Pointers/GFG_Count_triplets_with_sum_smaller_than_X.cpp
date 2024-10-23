#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    long long countTriplets(int n, long long sum, long long arr[])
    {
        sort(arr, arr + n);

        long long count = 0;

        for (long long i = 0; i < n - 2; ++i)
        {
            int j = i + 1, k = n - 1;

            while (j < k)
            {
                if (arr[i] + arr[j] + arr[k] < sum)
                    count += (k - j), ++j;
                else
                    --k;
            }
        }

        return count;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];

        for (int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
        }

        int minSum = INT32_MAX;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = i + 1; j <= n; ++j)
            {
                int pairSum = arr[i] + arr[j];

                if (minSum > pairSum)
                    minSum = pairSum + j - i;
            }
        }

        cout << minSum << endl;
    }

    return 0;
}
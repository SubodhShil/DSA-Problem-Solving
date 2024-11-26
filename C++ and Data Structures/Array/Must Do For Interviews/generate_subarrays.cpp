#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void generateSubarrays(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    for (int start = 0; start < n; ++start)
    {
        for (int end = start; end < n; ++end)
        {
            for (int k = start; k <= end; ++k)
            {
                cout << arr[k] << " ";
            }
            ++cnt;
            cout << endl;
        }
    }

    cout << "Total subarray size: " << cnt << endl;
}

int32_t main()
{
    vector<int> arr = {1, 2, 3, 4};

    cout << "Subarrays of the array are:" << endl;
    generateSubarrays(arr);

    return 0;
}

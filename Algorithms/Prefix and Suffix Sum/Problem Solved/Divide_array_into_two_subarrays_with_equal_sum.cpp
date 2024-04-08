#include <bits/stdc++.h>
using namespace std;
int n;

void equalSubarraySum()
{
    int arr[n]{0};
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    pair<int, int> firstSubarray, secondSubarray;
    int prefixComputation[n];

    /// prefix sum
    partial_sum(arr, arr + n, prefixComputation);
    int total = prefixComputation[n - 1];

    bool ok = 0;
    for (int i = 0; i < n; ++i)
    {
        if (total - prefixComputation[i] == prefixComputation[i])
        {
            firstSubarray.first = 0, firstSubarray.second = i;
            secondSubarray.first = i + 1, secondSubarray.second = n - 1;
            ok = 1;
            break;
        }
    }

    if (!ok)
    {
        cout << "NO\n";
        return;
    }

    cout << "First subarray range: " << firstSubarray.first << ' ' << firstSubarray.second << endl;
    cout << "Second subarray range: " << secondSubarray.first << ' ' << secondSubarray.second << endl;
}

int main()
{
    cin >> n;
    equalSubarraySum();

    return 0;
}

/*
Testcase 1

Input
6
1 12 3 3 12 1

Output:
First subarray range: 0 2
Second subarray range: 3 5

Testcase 2

Input
5
1 4 8 12 1

Output:
First subarray range: 0 2
Second subarray range: 3 4

 */
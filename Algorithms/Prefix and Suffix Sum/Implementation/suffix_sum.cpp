#include <bits/stdc++.h>
using namespace std;

void prefix_sum(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        arr[i] += arr[i - 1];
    }

    for (auto i : arr)
        cout << i << ' ';
}

void suffix_sum(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 2; i >= 0; --i)
    {
        arr[i] += arr[i + 1];
    }

    for (auto i : arr)
        cout << i << " ";
}

int main()
{
    vector<int> arr{15, 10, 25, 5, 10, 20};
    // vector<int> arr{33};
    prefix_sum(arr);
    // suffix_sum(arr);

    return 0;
}
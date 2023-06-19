/// link: https://leetcode.com/problems/unique-number-of-occurrences/description/

#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }

    for (auto &[first, second] : mp)
    {
        if (second == 1)
            ans = first;
    }

    return ans;
}

int main()
{
    // int arr[7] = {2, 3, 1, 6, 3, 6, 2};

    // int arr[9] = {1, 3, 1, 3, 6, 6, 7, 10, 7};
    int arr[] = {2, 4, 7, 2, 7};

    cout << findUnique(arr, 5) << endl;

    return 0;
}
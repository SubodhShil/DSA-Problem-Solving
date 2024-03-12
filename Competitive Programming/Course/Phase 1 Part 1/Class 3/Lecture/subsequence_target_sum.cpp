/*
    Given an array of n <= 20 integers, count the number of subsequences that sum to a given value s.
 */

#include <bits/stdc++.h>
using namespace std;

int n, target_sum, cnt = 0;
int arr[33];

void ans(int pos, int current_sum)
{
    if (pos > n)
    {
        if (current_sum == target_sum)
            ++cnt;
        return;
    }

    ans(pos + 1, current_sum + arr[pos]);
    ans(pos + 1, current_sum);
}

int main()
{
    cin >> n >> target_sum;

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }

    ans(1, 0);
    cout << cnt << endl;

    return 0;
}

/*

Input

n = 4, s = 5
arr = {1, 2, 3, 4}
result: 2

 */
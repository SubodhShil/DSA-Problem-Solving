/*
                            ॐ ॐ
    * https://www.spoj.com/problems/AE1B/
    * Author: Subodh Chandra Shil
    * Tag: Simple sorting and greedy
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, s;
    cin >> n >> k >> s;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr + n, greater<int>());

    long long expected = 1LL * k * s;
    long long sum = 0;

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (sum >= expected)
            break;

        sum += arr[i], ++cnt;
    }

    cout << cnt << endl;

    return 0;
}
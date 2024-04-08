#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int left = 0, right = n - 1;
    bool isPalindrome = true;

    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            isPalindrome = false;
            break;
        }

        ++left, --right;
    }

    (isPalindrome) ? cout << "YES" : cout << "NO";

    return 0;
}
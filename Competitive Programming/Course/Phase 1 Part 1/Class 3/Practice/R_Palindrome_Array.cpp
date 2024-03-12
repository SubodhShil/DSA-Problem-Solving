#include <bits/stdc++.h>
using namespace std;

#define int long long
int n;
const int N = 1e7 + 10;
int arr[N];

bool isPalindrome(int l, int r)
{
    if (l > r)
        return true;

    if (arr[l] != arr[r])
        return false;

    return isPalindrome(++l, --r);
}

int32_t main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    if (isPalindrome(0, n - 1))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
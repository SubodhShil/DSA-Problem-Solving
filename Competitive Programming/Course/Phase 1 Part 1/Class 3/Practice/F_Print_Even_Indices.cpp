#include <bits/stdc++.h>
using namespace std;

int arr[1000005];

void printRes(int n)
{
    if (n < 0)
        return;

    if (n % 2 == 0)
    {
        cout << arr[n] << " ";
    }

    printRes(n - 1);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    printRes(n - 1);

    return 0;
}
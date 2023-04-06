#include <bits/stdc++.h>
using namespace std;

void printLinear(int i, int n)
{
    if (i > n)
        return;

    cout << i << " ";
    printLinear(i + 1, n);
}

void printReverse(int i, int n)
{
    if (i <= 0)
        return;

    cout << n << " ";
    printReverse(n - 1, n - 1);
}

/// @brief using backtracking
/// @param i
/// @param n
void printReverse2(int i, int n)
{
    if (i > n)
        return;

    printReverse2(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    // printLinear(1, n);
    // printReverse(1, n);
    printReverse2(1, n);

    return 0;
}
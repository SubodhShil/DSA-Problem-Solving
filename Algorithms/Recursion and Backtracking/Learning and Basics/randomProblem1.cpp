#include <bits/stdc++.h>
using namespace std;

int friends(int n)
{
    /// base case
    if (n <= 2)
        return n;

    return friends(n - 1) + (n - 1) * friends(n - 2);
}

int main()
{

    return 0;
}
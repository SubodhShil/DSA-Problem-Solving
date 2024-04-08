#include <bits/stdc++.h>
using namespace std;

/// Time complexity: O(2^n)
int fibonacci(int n)
{
    // if (n == 0 || n == 1)
    if (n <= 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibonacci(n) << endl;
    }

    return 0;
}

/*
--------
Testcase
--------
Input:
5
1
5
6
2
7
Output:
1
8
13
2
21
*/
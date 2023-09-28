/* https://codeforces.com/problemset/problem/822/A */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    long long int res = 1;
    for (int i = 2; i <= min(a, b); ++i)
        res *= i;

    cout << res << endl;

    return 0;
}
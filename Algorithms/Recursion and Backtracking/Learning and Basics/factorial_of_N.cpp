#include <bits/stdc++.h>
using namespace std;

int factorial(int N)
{
    if (N <= 1)
        return 1;

    return factorial(N - 1) * N;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;

    return 0;
}
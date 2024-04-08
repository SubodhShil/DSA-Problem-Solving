#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i > n)
        return;

    cout << i << ' ';
    print(i + 1, n);
}

int main()
{
    int i, n;
    cin >> i >> n;
    print(i, n);

    return 0;
}
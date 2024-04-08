#include <bits/stdc++.h>
using namespace std;

void printReverse(vector<int> &v, int n, int i = 0)
{
    if (i > n - 1)
        return;

    printReverse(v, n, i + 1);

    cout << v[i] << ' ';
}

int main()
{
    vector<int> v{1, 2, 3, 4, 10, 23};
    printReverse(v, v.size());

    return 0;
}
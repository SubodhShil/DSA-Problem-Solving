#include <bits/stdc++.h>
using namespace std;

void arrayDisplay(vector<int> &v, int n, int i = 0)
{
    if (i > n - 1)
        return;

    cout << v[i] << " ";

    arrayDisplay(v, n, i + 1);
}

int main()
{
    vector<int> v{1, 2, 3, 4, 10, 13, 322};
    arrayDisplay(v, v.size());

    return 0;
}
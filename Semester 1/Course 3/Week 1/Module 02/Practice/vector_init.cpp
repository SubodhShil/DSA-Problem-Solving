#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, value;
    cin >> size >> value;

    vector<int> v(size, value);

    for (auto i : v)
        cout << i << " ";

    return 0;
}
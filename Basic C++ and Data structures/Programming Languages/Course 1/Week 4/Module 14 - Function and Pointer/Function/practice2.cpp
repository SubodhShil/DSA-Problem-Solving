#include <bits/stdc++.h>
using namespace std;

/// this function demonstrates
/// how return type and no parameter function works

int sum(void)
{
    int x, y;
    cout << "Enter two values: ";
    cin >> x >> y;
    return x + y;
}

int main()
{
    cout << sum() << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /// Calculate for how many time the algorithm will be run
    for (int i = 0; i < n; i *= 2)
    {
        cout << i << ' ';
    }

    return 0;
}
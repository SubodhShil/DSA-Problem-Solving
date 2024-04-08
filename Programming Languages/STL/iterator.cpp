#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10, 202, 3, 77, 93};

    /// declare an iterator
    /// iterator points to first element of the array
    vector<int>::iterator it = v.begin();

    for (; it != v.end(); ++it)
        cout << *it << " ";

    return 0;
}
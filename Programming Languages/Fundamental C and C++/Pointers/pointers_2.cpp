#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 100;
    cout << "Before dereference: Value of x = " << x << endl;

    /// pointer declared
    int *ptr = &x;

    /// with dereference you can go the place
    /// and make change to value
    /// update the actual value of 'x'
    *ptr = 300;

    cout << "After dereference: Value of x = " << x << endl;

    return 0;
}
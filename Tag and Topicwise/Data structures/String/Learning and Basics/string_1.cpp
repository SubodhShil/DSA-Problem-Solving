#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// unlike string variables cout can ignore whitespaces like space, newline, tab but can't ignore null character since it is treated as end of string or string delimeter
    cout << "Superman is \ngood" << endl;
    cout << "Superman\tis\tgreat\n";
    cout << "Super\0man" << endl;

    return 0;
}
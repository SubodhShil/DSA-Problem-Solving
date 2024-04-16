#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// empty string size
    string firstString;
    cout << firstString.size() << endl;
    cout << sizeof(firstString) << endl;
    cout << firstString.capacity() << endl;

    firstString = "Subodh Chandra Shil";
    cout << firstString.capacity() << endl;

    string name = "Rebeka";
    string name2 = "Rebeka";

    /// string equality check
    if (name == name2)
        cout << "Both strings are same\n";
    else
        cout << "Strings are not same\n";

    return 0;
}
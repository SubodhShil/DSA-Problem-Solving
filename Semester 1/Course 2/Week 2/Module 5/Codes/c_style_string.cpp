#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// copying one string to another in C-style string with library function
    char name[10] = "John";
    char name2[10] = "Rebeka";
    strcpy(name, name2);
    cout << name << endl
         << name2 << endl;

    /// C-style string equality check
    if (strcmp(name, name2) == 0)
        cout << "Same\n";
    else
        cout << "No same\n";

    return 0;
}
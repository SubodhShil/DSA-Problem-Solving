/// Print full name of user for user
/// given 'n' times

#include <bits/stdc++.h>
using namespace std;

/// @brief Bottom to top approach
/// @param n
/// @param name
void printName(int &n, string name)
{
    /// base case
    if (!n)
        return;

    cout << name << " " << n << endl;
    printName(--n, name);
}

void printName2(int i, int n, string name)
{
    if (i > n)
        return;

    cout << name << " " << i << endl;
    printName2(++i, n, name);
}

int main()
{
    int n;
    string name;
    cin >> n;
    cin.ignore(256, '\n');

    getline(cin, name);

    cout << "----------\n";
    // printName(n, name);
    printName2(1, n, name);
    cout << "----------\n";

    return 0;
}
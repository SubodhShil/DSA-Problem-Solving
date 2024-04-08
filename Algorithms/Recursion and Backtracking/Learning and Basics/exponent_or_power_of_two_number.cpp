//^ Power of a number using recursion

#include <bits/stdc++.h>
using namespace std;

int exponent(int a, int b)
{
    //* base cases
    if (b == 1)
        return a;

    else if (b % 2 == 0)
        return exponent(a, b / 2) * exponent(a, b / 2);
    else
        return a * exponent(a, b / 2) * exponent(a, b / 2);
}

int findPower(int a, int b = 0)
{
    //* base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    //* processing
    int ans = findPower(a, b / 2);
    if (b & 1)
        return a * ans * ans;
    else
        return ans * ans;
}

int main()
{
    int a, b;
    cout << "Enter number and the power: ";
    cin >> a >> b;

    // cout << exponent(a, b) << endl;
    cout << findPower(a, b) << endl;

    return 0;
}
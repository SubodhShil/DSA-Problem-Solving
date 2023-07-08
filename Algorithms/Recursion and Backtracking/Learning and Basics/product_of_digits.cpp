#include <bits/stdc++.h>
using namespace std;

int product_of_digits(int n)
{
    if (n % 10 == n)
    {
        return n;
    }

    return (n % 10) * product_of_digits(n / 10);
}

int main()
{
    cout << product_of_digits(152) << endl;

    return 0;
}
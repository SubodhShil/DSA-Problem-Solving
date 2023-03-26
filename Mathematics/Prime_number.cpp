#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= (n / 2); i++)
    {
        if (!(n % i))
            return false;
    }

    return true;
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number\n";
    }
    else
    {
        cout << number << " is not a prime number\n";
    }

    return 0;
}
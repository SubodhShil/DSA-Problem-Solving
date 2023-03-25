#include <bits/stdc++.h>
using namespace std;

void digits(int n)
{

    while (n != 0)
    {
        cout << n % 10 << endl;

        n = n / 10;
    }
}

int countNumber(int n)
{
    /// counter for couting digits
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    digits(number);
    cout << "Digits in the number " << number << " is: " << countNumber(number) << endl;

    return 0;
}
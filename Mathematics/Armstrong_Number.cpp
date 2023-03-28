/**
 * @file Armstrong_Number.cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-28
 * @topic: Mathematics
 */

#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int number = n;
    int armstrongNumber = 0;

    while (n)
    {
        int lastDigit = n % 10;
        armstrongNumber += pow(lastDigit, 3);
        n = n / 10;
    }

    return (armstrongNumber == number) ? true : false;
}

int main()
{
    int q;
    cin >> q;
    cout << isArmstrong(q) << endl;

    return 0;
}
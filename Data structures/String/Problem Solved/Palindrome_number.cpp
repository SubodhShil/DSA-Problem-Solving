/**
 * @file Palindrome_number.cpp
 * @author Subodh Chandra Shil
 * @source: https://practice.geeksforgeeks.org/problems/palindrome0746/1
 * @date 2023-03-27
 */

#include <bits/stdc++.h>
using namespace std;

string isPalindrome(int n)
{
    int number = n;
    int reverseNumber = 0;

    while (number)
    {
        int lastDigit = number % 10;
        number /= 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }

    return (n == reverseNumber) ? "Yes" : "No";
}

int main()
{
    cout << isPalindrome(121) << endl;

    return 0;
}
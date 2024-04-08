#include <bits/stdc++.h>
using namespace std;

/**
 * @Time_Complexity: O(log10(N))
 * Average solution
 * @param x
 * @return int
 */

int countDigit(long long x)
{
    if (x == 0)
        return 1;

    int count = 0;
    while (x)
    {
        count++;
        x = x / 10;
    }

    return count;
}

/**
 * @brief
 * @Time_Complexity:
 * Best time complexity
 */

int countDigit2(long long x)
{
    // error handling for input 0
    if (x == 0)
        return 1;

    // error handling for negative number
    if (x < 0)
        return (int)log10(abs(x)) + 1;

    return (int)log10(x) + 1;
}

int main()
{
    int number = 0;
    cout << "Enter number: ";
    cin >> number;

    cout << "Digits in the number is: " << countDigit(number) << endl;

    return 0;
}
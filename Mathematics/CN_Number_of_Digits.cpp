#include <bits/stdc++.h>
using namespace std;

/**
 * @Time_Complexity: O(N)
 * Average solution
 * @param x
 * @return int
 */

int countDigit(long long x)
{
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
 * @Time_Complexity: O(1)
 * Best time complexity
 */

int countDigit2(long long x)
{
    return (int)log10(x) + 1;
}

int main()
{
    int number = 0;
    cout << "Enter number: ";
    cin >> number;

    cout << "Digits in the number is: " << countDigit2(number) << endl;

    return 0;
}
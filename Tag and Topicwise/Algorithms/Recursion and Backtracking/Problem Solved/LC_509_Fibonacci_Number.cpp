/**
 * @file        LC_509_Fibonacci_Number.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-24
 * @resources:  https://leetcode.com/problems/fibonacci-number/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        /// base condition
        if (n <= 1)
            return n;

        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{

    return 0;
}
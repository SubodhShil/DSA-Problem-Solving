/**
 * @file LC_258.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-01
 * @problem_source: https://leetcode.com/problems/add-digits/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        while (num % 10 != num)
        {
            int temp = num;
            num = 0;

            while (temp)
            {
                num += (temp % 10);
                temp /= 10;
            }
        }

        return num;
    }
};

int main()
{
    Solution sol1;
    cout << sol1.addDigits(77);

    return 0;
}
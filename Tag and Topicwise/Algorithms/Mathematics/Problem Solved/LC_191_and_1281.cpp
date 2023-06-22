/**
 * @file 05.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-04
 * link:    https://leetcode.com/problems/number-of-1-bits/
 *          https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 */

#include <bits/stdc++.h>
using namespace std;

class leetCodeProblems
{
public:
    int subtractProductAndSum(int n)
    {
        int product_of_digit = 1, sum_of_digit = 0;

        while (n != 0)
        {
            int last_digit = n % 10;
            product_of_digit *= last_digit;
            sum_of_digit += last_digit;
            n /= 10;
        }

        return abs(product_of_digit - sum_of_digit);
    }

    int subtractProductAndSum_Way02(int n, int sum = 0, int product = 1)
    {
        for (int rem = 0; rem = n % 10; sum += rem, product *= rem, n /= 10)
            ;
        return product - sum;
    }

    int hammingWeight(string num)
    {
        int max_length = 32;
        if (num.size() < max_length)
            return 0;

        sort(num.begin(), num.end());

        int i = num.size() - 1, count = 0;

        while (num[i] != '0')
        {
            count++;
            i--;
        }

        return count;
    }

    int hammingWeight_way02(uint64_t n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
                count++;
            n = n >> 1;
        }

        return count;
    }
};

int main()
{
    leetCodeProblems problem1;
    // cout << problem1.subtractProductAndSum(21);
    // cout << problem1.subtractProductAndSum_Way02(5);
    // cout << problem1.hammingWeight("11111111111111111111111111111101");
    cout << problem1.hammingWeight_way02(11111111111111111111111111111101);

    return 0;
}
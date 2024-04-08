/**
 * @file        LC_1342_Number_of_Steps_to_Reduce_a_Number_to_Zero.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int helper(int num, int cnt = 0)
    {
        if (num == 0)
            return cnt;

        ++cnt;
        int nextNum = (num & 1) ? num - 1 : num / 2;
        return helper(nextNum, cnt);
    }

    int numberOfSteps(int num)
    {
        return helper(num);
    }
};

int main()
{

    return 0;
}
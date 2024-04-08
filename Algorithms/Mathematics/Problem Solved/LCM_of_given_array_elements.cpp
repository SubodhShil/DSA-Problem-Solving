/**
 * @file LCM_of_given_array_elements.cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-31
 * @problem_source: https://practice.geeksforgeeks.org/problems/lcm-of-given-array-elements3919/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lcmOfArray(int N, int A[])
    {
        long long ans = A[0];
        for (int i = 1; i < N; i++)
        {
            long long b = A[i];
            ans = (ans * b) / __gcd(ans, b) % 1000000007;
        }

        return ans;
    }
};

int main()
{
    Solution op1;
    int A[] = {1, 2, 8, 3};
    cout << op1.lcmOfArray(4, A) << endl;

    return 0;
}
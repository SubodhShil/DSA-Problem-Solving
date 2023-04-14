/**
 * @file CN_Sum_Of_Two_Arrays.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-14
 * @problem_source: https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?leftPanelTab=0
 * @tutorial: https://youtu.be/Z7_nMTHROZo?t=1796
 */

#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> result;
    int carry = 0;
    int i = n - 1, j = m - 1;

    // a => i
    // b => j
    while (i >= 0 && j >= 0)
    {
        int sum = a[i--] + b[j--] + carry;
        carry = sum / 10;

        result.insert(result.begin(), sum % 10);
    }

    /// if any elements remains at array a[] add them to result
    while (i >= 0)
    {
        int sum = a[i--] + carry;
        carry = sum / 10;

        result.insert(result.begin(), sum % 10);
    }

    /// if any elements remains at array b[] add them to result
    while (j >= 0)
    {
        int sum = b[j--] + carry;
        carry = sum / 10;

        result.insert(result.begin(), sum % 10);
    }

    /// if any carry remains
    if (carry)
        result.insert(result.begin(), carry);

    return result;
}

int main()
{
    vector<int> a{3, 1, 7, 9};
    vector<int> b{8};
    findArraySum(a, a.size(), b, b.size());

    return 0;
}
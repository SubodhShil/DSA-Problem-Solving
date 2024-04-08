/**
 * @file        GFG_Check_if_two_arrays_are_equal_or_not.cpp
 * @author      Subodh Chandra Shil
 * @link        https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool check(vector<ll> A, vector<ll> B, int N)
    {
        if (A.size() != B.size())
            return 0;

        int n = A.size();
        unordered_map<int, int> elementOccurrences;
        for (int i = 0; i < n; ++i)
        {
            elementOccurrences[A[i]]++;
            elementOccurrences[B[i]]--;
        }

        for (auto i : elementOccurrences)
        {
            if (i.second != 0)
                return false;
        }

        return true;
    }
};

int main()
{

    return 0;
}
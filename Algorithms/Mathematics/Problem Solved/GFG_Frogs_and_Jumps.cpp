/**
 * @file        2_GFG_Frogs_and_Jumps.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-02
 * @resource:   https://practice.geeksforgeeks.org/problems/5551749efa02ae36b6fdb3034a7810e84bd4c1a4/1?page=4&difficulty[]=0&category[]=Arrays&sortBy=submissions
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
class Solution
{
public:
    int unvisitedLeaves(int N, int leaves, int frogs[])
    {
        vector<bool> allLeaves(leaves + 1, true);
        int count = 0;

        for (int i = 0; i < N; ++i)
        {
            int currentLeave = frogs[i];

            /// Give you a TLE without this if statement
            if (allLeaves[currentLeave] == true)
            {
                for (int j = currentLeave; j <= leaves; j += currentLeave)
                {
                    allLeaves[j] = false;
                }
            }
        }

        for (int i = 1; i < allLeaves.size(); ++i)
        {
            if (allLeaves[i] == true)
                count++;
        }

        return count;
    }
};

int main()
{

    return 0;
}
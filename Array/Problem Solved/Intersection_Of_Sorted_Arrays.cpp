/*
 * link 1: https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findArrayIntersection1(vector<int> &A, int n, vector<int> &B, int m)
    {
        //* Approach 01
        //^ This approach suitable to used when we are concious about the frequency of the elements

        // Solution is here: http://t.ly/nLol
    }

    vector<int> findArrayIntersection2(vector<int> &A, int n, vector<int> &B, int m)
    {
        //* Approach 02
        //& Hashing
        //^ for frequent elements
        vector<int> result;
        unordered_map<int, int> storeElementFrquency;

        for (auto &i : A)
        {
            storeElementFrquency[i]++;
        }

        for (auto &j : B)
        {
            if (storeElementFrquency.count(j))
            {
                result.push_back(j);
                storeElementFrquency[j]--;
                if (storeElementFrquency[j] == 0)
                    storeElementFrquency.erase(j);
            }
        }

        return result;
    }
};

int main()
{

    return 0;
}
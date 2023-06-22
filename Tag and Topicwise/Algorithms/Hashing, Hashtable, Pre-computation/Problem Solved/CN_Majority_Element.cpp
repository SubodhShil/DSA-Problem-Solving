/**
 * @file            CN_Majority_Element.CPP
 * @author          Subodh Chandra Shil
 * @date            2023-05-08
 * @resources:      https://www.codingninjas.com/codestudio/problems/majority-element_6783241?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int majorityElement(vector<int> v)
    {
        int n = v.size();
        int result = 0;
        map<int, int> ferquencyOfElements;

        for (auto i : v)
            ferquencyOfElements[i]++;

        /// question to interviewer: if there are two different elements
        /// with same frequency eventually majority, then which one to choose between?
        for (auto i : ferquencyOfElements)
        {
            if (i.second > result && i.second > n / 2)
                result = i.first;
        }

        return result;
    }
};

/// Moor's voting algorithm
class Solution2
{
public:
    int majorityElement(vector<int> v)
    {
        int cnt = 0;
        int resultElement;

        for (auto i : v)
        {
            if (cnt == 0)
            {
                resultElement = i;
                cnt = 1;
            }
            else if (i == resultElement)
                ++cnt;
            else
                --cnt;
        }

        int frequency = 0;
        for (int i = 0; i < v.size(); ++i)
        {
            if (v[i] == resultElement)
                ++frequency;
        }

        return (frequency > v.size() / 2) ? resultElement : -1;
    }
};

int main()
{

    return 0;
}
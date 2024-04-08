/**
 * @file        CN_Reversing_Queue.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://www.codingninjas.com/studio/problems/reversing-queue_1170046?leftPanelTab=1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    void solver(queue<int> &q)
    {
        if (q.empty())
        {
            return;
        }

        int ele = q.front();
        q.pop();
        solver(q);
        q.push(ele);
    }

    void reverse(queue<int> &q)
    {
        solver(q);
    }
};

int main()
{

    return 0;
}
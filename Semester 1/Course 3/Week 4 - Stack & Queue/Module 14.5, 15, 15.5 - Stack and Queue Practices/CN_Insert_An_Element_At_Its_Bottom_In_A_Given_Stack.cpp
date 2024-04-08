/**
 * @file        CN_Insert_An_Element_At_Its_Bottom_In_A_Given_Stack.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    stack<int> pushAtBottom(stack<int> &myStack, int x)
    {
        stack<int> secondary;
        while (!myStack.empty())
        {
            secondary.push(myStack.top());
            myStack.pop();
        }

        secondary.push(x);

        while (!secondary.empty())
        {
            myStack.push(secondary.top());
            secondary.pop();
        }

        return myStack;
    }
};

class Solution2
{
public:
    void solver(stack<int> &myStack, int x)
    {
        if (myStack.empty())
        {
            myStack.push(x);
            return;
        }

        int element = myStack.top();
        myStack.pop();

        solver(myStack, x);
        myStack.push(element);
    }

    stack<int> pushAtBottom(stack<int> &myStack, int x)
    {
        solver(myStack, x);
        return myStack;
    }
};

int main()
{

    return 0;
}
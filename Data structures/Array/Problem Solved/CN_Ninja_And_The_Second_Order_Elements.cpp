/**
 * @file CN_Ninja_And_The_Second_Order_Elements.cpp
 * @author Subodh Chandra Shil
 * @problem_source: https://www.codingninjas.com/codestudio/problems/ninja-and-the-second-order-elements_6581960?leftPanelTab=0
 * @date 2023-04-10
 */

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> a, int n)
{
    int largest = a[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }

        else if (largest > a[i] && a[i] > secondLargest)
            secondLargest = a[i];
    }

    return secondLargest;
}

int secondSmallest(vector<int> a, int n)
{
    int smallest = a[0];
    int secondSmallest = INT32_MAX;

    for (int i = 1; i < n; i++)
    {
        if (smallest > a[i])
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (smallest < a[i] && secondSmallest > a[i])
        {
            secondSmallest = a[i];
        }
    }

    return secondSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);

    return {slargest, ssmallest};
}

int main()
{

    return 0;
}
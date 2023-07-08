/**
 * @file check_if_array_is_sorted.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-10
 * @problem_source: https://www.codingninjas.com/codestudio/problems/ninja-and-the-sorted-check_6581957?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }

    return 1;
}

bool isSorted(vector<int> v)
{
    int falseCount = 0;

    /// ascending order sort check
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] < 0)
        {
            ++falseCount;
            break;
        }
    }

    if (falseCount == 0)
        return true;

    for (int j = 0; j < v.size() - 1; j++)
    {
        if (v[j] < v[j + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // vector<int> v{1, 2, 2, 3, 3, 4};
    // vector<int> v{10, 2, 9, 8, 7};
    // vector<int> v{22, 55, 75, 92};
    // vector<int> v{-5, -3, 3, 7};
    vector<int> v{7, 3, -3, -5};

    cout << isSorted(v) << endl;

    return 0;
}
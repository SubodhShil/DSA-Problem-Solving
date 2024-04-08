/**
 * @file CN_Remove_Duplicates_from_Sorted_Array.cpp
 * @author your name (you@domain.com)
 * @date 2023-04-11
 * @question_link:  https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 *                  https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_1102307?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

/// bruteforce
/// using set data structure
/// Time complexity: O(N log N + N)
/// Space complexity: O(N)
int removeDuplicates(vector<int> &arr, int n)
{
    /// Space complexity: O(n)
    set<int> uniqueElements;

    /// partial complexity of the loop: O(n)
    for (int i = 0; i < n; i++)
    {
        /// set insertion requires O(log n) complexity
        uniqueElements.insert(arr[i]);
    }

    int i = 0;
    /// partial complexity: O(n)
    for (auto x : uniqueElements)
        arr[i++] = x;

    return uniqueElements.size();
}

/// 2 pointers approach
int removeDuplicates2(vector<int> &arr, int n)
{
    /// set two index pointers
    int i = 0, j = 1;
    while (j != arr.size())
    {
        if (arr[i] == arr[j])
            j++;
        else if (arr[i] != arr[j])
            arr[++i] = arr[j];
    }

    return i + 1;
}

int main()
{

    return 0;
}
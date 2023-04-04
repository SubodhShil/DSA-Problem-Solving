/**
 * @file 349_Intersection_of_Two_Arrays.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-04
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ///@link: https://leetcode.com/problems/intersection-of-two-arrays/description/
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        //* Set data structure has been used in this problem
        //^ Set is a data structure in which it can store unique elements (frequent elements will be ignored) in ascending order or dictionary order

        set<int> storeUniqueElements(nums1.begin(), nums1.end()); //! assigning vector elements to the set
        vector<int> result;

        for (auto &i : nums2) //! traverse the vector
        {
            if (storeUniqueElements.count(i))
            {
                result.push_back(i);
                storeUniqueElements.erase(i);
            }
        }

        return result;
    }

    ///@link: https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149
    vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
    {
        vector<int> ans{-1};
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (arr1[i] > arr2[j])
                j++;
            else if (arr1[i] < arr2[j])
                i++;
            else
            {
                if (ans[0] == -1)
                    ans.clear();
                ans.push_back(arr1[i]);
                i++, j++;
            }
        }

        return ans;
    }
};

/*
* Similar Questions:
^ 1. https://www.interviewbit.com/problems/intersection-of-sorted-arrays/
 */
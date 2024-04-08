/**
 * @file        GFG_Left_most_and_right_most_index.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1?
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    pair<long, long> indexes(vector<long long> v, long long x)
    {
        int n = v.size();
        int lastOccurrence = -1, firstOccurrence = -1;
        int start = 0, end = n - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (v[mid] == x)
            {
                if (v[mid] != v[mid - 1] && v[mid] != v[mid + 1])
                    return {mid, mid};
                if (v[mid] != v[mid - 1])
                {
                    firstOccurrence = mid;
                    break;
                }
                else if (v[mid] == v[mid - 1])
                    end = mid - 1;
            }
            else if ((v[mid] > x && v[start] > v[end]) || (v[mid] < x && v[start] < v[end]))
                start = mid + 1;
            else
                end = mid - 1;
        }

        if (firstOccurrence != -1)
        {
            for (int i = firstOccurrence; i < n; ++i)
            {
                lastOccurrence = i;
                if (v[i] != v[i + 1])
                    break;
            }
        }

        return {firstOccurrence, lastOccurrence};
    }
};

/// Optimized solution: O(log n)
class Solution2
{
    public:
    int leftIndex(vector<long long> v, long long x)
    {
        int n = v.size(); 
        int start = 0, end = n - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(v[mid] == x)
            {
                int prev = (mid - 1) % n;
                if(v[mid] != v[prev])
                    return mid;
                if(v[mid] == v[prev])
                    end = mid - 1;
            }
            
            else if(v[start] > v[end] && x < v[mid]
                 || v[start] < v[end] && x > v[mid])
                start = mid + 1;
            else 
                end = mid - 1;
        }
        
        return -1;
    }
    
    int rightIndex(vector<long long> v, long long x)
    {
        int n = v.size();
        int start = 0, end = v.size() - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n;
            
            if(v[mid] == x)
            {
                if(v[mid] != v[next])
                    return mid;
                if(v[mid] == v[next])
                    start = mid + 1;
            }
            
            else if(v[start] > v[end] && x < v[mid]
                 || v[start] < v[end] && x > v[mid])
                start = mid + 1;
            else 
                end = mid - 1;
        }
        
        return -1;
    }
    
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int left = leftIndex(v, x);
        int right = rightIndex(v, x);
        
        return {left, right};
    }
};

int main()
{

    return 0;
}
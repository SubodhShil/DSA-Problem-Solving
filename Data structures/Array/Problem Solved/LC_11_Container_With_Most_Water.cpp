/**
 * @file        LC_11_Container_With_Most_Water.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-15
 * @resources:  https://leetcode.com/problems/container-with-most-water/
                https://youtu.be/ZHQg07n_tbg
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int size = height.size();
        int start = 0, end = size - 1;
        int maximum = 0;

        while (start < end)
        {
            int width = end - start;
            int length = min(height[start], height[end]);
            int area = length * width;
            maximum = max(maximum, area);

            if (height[start] < height[end])
                ++start;
            else
                --end;
        }

        return maximum;
    }
};

int main()
{

    return 0;
}
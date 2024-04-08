/**
 * @file            GFG_Rearrange_Array_Alternately.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-06-26
 * @resources:      https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1
 *                  https://youtu.be/kQrezgskpho
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rearrange(long long *arr, int n)
    {
        int mx = arr[n - 1] + 1;
        int min_i = 0, max_i = n - 1;
        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                arr[i] += (arr[min_i] % mx) * mx;
                ++min_i;
            }

            else
            {
                arr[i] += (arr[max_i] % mx) * mx;
                --max_i;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            arr[i] /= mx;
        }
    }
};

int main()
{

    return 0;
}
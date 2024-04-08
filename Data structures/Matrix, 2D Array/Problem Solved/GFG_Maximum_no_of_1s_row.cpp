/*
                            ॐ ॐ
    * 
    * Author: Subodh Chandra Shil
    * Tag: Matrix, 2D array
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

// bruteforce
class Solution
{
public:
    int maxOnes(vector<vector<int>> &Mat, int N, int M)
    {
        // if two row have the same number of 1's and they are maximum so which one return as result
        int result = 0;
        int maxCnt = INT32_MIN;

        for (int i = 0; i < N; ++i)
        {
            int cnt = 0;
            for (int j : Mat[i])
            {
                if (j)
                    ++cnt;
            }

            if (cnt > maxCnt)
                maxCnt = cnt, result = i;
        }

        return result;
    }
};

int main()
{

    return 0;
}

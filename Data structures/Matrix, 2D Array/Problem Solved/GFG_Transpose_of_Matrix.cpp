/*
                            ॐ ॐ
    * https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?page=1
    * Author: Subodh Chandra Shil
    * Tag: Matrix, 2D array
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

/// bruteforce
class Solution1
{
public:
    void transpose(vector<vector<int>> &matrix, int n)
    {
        int row = n, col = n;
        vector<vector<int>> temp = matrix;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                matrix[j][i] = temp[i][j];
            }
        }
    }
};

// Optimized
class Solution
{
public:
    void transpose(vector<vector<int>> &matrix, int n)
    {
        int i = 0, j = 1; // on row wise j moves
        // int k = j, l = i; // on column wise k moves

        for (; i < n;)
        {
            int k = j, l = i; // on column wise k moves
            for (; j < n;)
            {
                swap(matrix[i][j++], matrix[k++][l]);
            }
            ++i, j = i + 1;
            // k = j, l = i;
        }
    }
};

class Solution
{
public:
    void transpose(vector<vector<int>> &matrix, int n)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
int main()
{

    return 0;
}
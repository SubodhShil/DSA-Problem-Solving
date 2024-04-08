#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m)
    {
        /// traversal way: first row -> last column -> last row -> first column
        vector<int> result;
        if (m == 1)
        {
            for (int i = 0; i < n; ++i)
                result.push_back(matrix[i][0]);
            return result;
        }

        if (n == 1)
        {
            for (int i = 0; i < m; ++i)
                result.push_back(matrix[0][i]);
            return result;
        }

        // print first row
        for (int i = 0; i < m; ++i)
            result.push_back(matrix[0][i]);

        // print last column
        for (int i = 1; i < n; ++i)
        {
            result.push_back(matrix[i][m - 1]);
        }

        // print last row
        for (int i = m - 2; i >= 0; --i)
        {
            result.push_back(matrix[n - 1][i]);
        }

        // print first column
        for (int i = n - 2; i >= 0; --i)
        {
            result.push_back(matrix[i][0]);
        }

        result.pop_back();

        return result;
    }
};

class Solution
{
public:
    vector<int> boundaryTraversal(vector<vector<int>> mat, int n, int m)
    {
        vector<int> v;

        for (int i = 0; i < m; i++)
            v.push_back(mat[0][i]);
        for (int i = 1; i < n; i++)
            v.push_back(mat[i][m - 1]);
        if (n > 1)
            for (int i = m - 2; i >= 0; i--)
                v.push_back(mat[n - 1][i]);
        if (m > 1)
            for (int i = n - 2; i > 0; i--)
                v.push_back(mat[i][0]);

        return v;
    }
};

int main()
{

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
    Bruteforce: create a secondary 2D array
    and place all the array elements to it
    time complexity: O(N^2), space complexity: O(N^2)
*/

/*
    Optimal solution
    1. Use transpose matrix algorithm
    2. Reverse each row
*/
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int size = matrix.size();

        for (int i = 0; i < size; ++i)
            for (int j = 0; j < i; ++j)
                swap(matrix[i][j], matrix[j][i]);

        for (int i = 0; i < size; ++i)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};

int main()
{

    return 0;
}
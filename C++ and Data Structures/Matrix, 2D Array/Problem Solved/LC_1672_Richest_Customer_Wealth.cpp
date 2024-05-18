#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {

        // Flatten the 2D matrix into a 1D vector for sorting
        /* std::vector<int> flattenedMatrix;
        for (const auto &row : matrix)
        {
            flattenedMatrix.insert(flattenedMatrix.end(), row.begin(), row.end());
        } */

        int row = accounts.size();
        int column = accounts[0].size();
        int result = INT32_MIN;

        for (int i = 0; i < row; ++i)
        {
            int sum = 0;

            /* for(int j = 0; j < column; ++j)
            {
                sum += accounts[i][j];
            } */

            sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);

            result = max(result, sum);
        }

        return result;
    }
};

int main()
{

    return 0;
}
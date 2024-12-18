/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/snakes-and-ladders/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    int n, m;

    pair<int, int> getCoords(int s)
    {
        int row = n - 1 - (s - 1) / n;

        int col = (s - 1) % n;

        if ((n % 2 == 1 && row % 2 == 1) || (n % 2 == 0 && row % 2 == 0))
            col = n - 1 - col;

        return make_pair(row, col);
    }

    int snakesAndLadders(vector<vector<int>> &board)
    {
        n = board.size(), m = board[0].size();
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        int steps = 0;

        queue<int> qu;
        qu.push(1);
        visited[n - 1][0] = 1;

        while (!qu.empty())
        {
            int sz = qu.size();

            while (sz--)
            {
                int current = qu.front();
                if (current == n * n)
                    return steps;
                qu.pop();

                for (int i = 1; i <= 6; ++i)
                {
                    int val = current + i;

                    if (val > n * n)
                        break;

                    pair<int, int> coords = getCoords(val);
                    int r = coords.first, c = coords.second;

                    if (!visited[r][c])
                    {
                        visited[r][c] = 1;
                        if (board[r][c] == -1)
                        {
                            qu.push(val);
                        }
                        else
                        {
                            qu.push(board[r][c]);
                        }
                    }
                }
            }

            ++steps;
        }

        return -1;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
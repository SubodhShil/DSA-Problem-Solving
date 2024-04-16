#include <bits/stdc++.h>
using namespace std;
/*
    A knight in chess can move in 8 possible way
    1)   2 cell forward then left   👉  (i - 2), (j - 1) = (-2, -1)
    2)   2 cell forward then right  👉  (i - 2), (j + 1) = (-2, 1)
    3)   2 cell backward then left  👉  (i + 2), (j - 1) = (2, -1)
    4)   2 cell backward then right 👉  (i + 2), (j + 1) = (2 , 1)
    5)   2 cell left then forward   👉  (i - 1), (j - 2) = (-1, -2)
    6)   2 cell left then backward  👉  (i + 1), (j - 2) = (1, -2)
    7)   2 cell right then forward  👉  (i - 1), (j + 2) = (-1, 2)
    8)   2 cell right then backward 👉  (i + 1), (j + 2) = (1, 2)
*/

typedef pair<int, int> pii;
int level[8][8];
bool visited[8][8];
vector<pii> coordinates = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};

bool isSafe(int i, int j)
{
    return (i >= 0 && i < 8 && j >= 0 && j < 8);
}

void bfs(int si, int sj)
{
    queue<pii> qu;
    qu.push({si, sj});
    level[si][sj] = 0;
    visited[si][sj] = 1;

    while (!qu.empty())
    {
        pii current = qu.front();
        qu.pop();
        int i = current.first;
        int j = current.second;

        for (auto k : coordinates)
        {
            int ni = k.first + i;
            int nj = k.second + j;

            if (isSafe(ni, nj) && !visited[ni][nj])
            {
                qu.push({ni, nj});
                visited[ni][nj] = 1;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, d;
        cin >> s >> d;
        int si, sj, di, dj;

        /* si = abs((s[1] - '0') - 8);
        sj = s[0] % 97;
        di = abs(d[1] - '0' - 8);
        dj = s[0] % 97; */

        si = s[0] - 'a';
        sj = s[1] - '1';
        di = d[0] - 'a';
        dj = d[1] - '1';
        bfs(si, sj);

        cout << level[di][dj] << endl;

        /// marking unvisited again
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                visited[i][j] = 0;
                level[i][j] = 0;
            }
        }
    }

    return 0;
}
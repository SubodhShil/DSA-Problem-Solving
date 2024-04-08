#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int visited[200][200];

    vector<pair<int, int>> paths = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    bool isValid(int n, int m, int sr, int sc)
    {
        return (sr >= 0 && sr < n && sc >= 0 && sc < m);
    }

    void dfs(vector<vector<int>> &image, int n, int m, int sr, int sc, int color)
    {
        visited[sr][sc] = 1;
        image[sr][sc] = color;

        for (int i = 0; i < 4; ++i)
        {
            int ci = sr + paths[i].first, cj = sc + paths[i].second;

            if (!visited[ci][cj] && isValid(n, m, ci, cj))
            {
                dfs(image, n, m, ci, cj, color);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();

        dfs(image, n, m, sr, sc, color);

        return image;
    }
};

int main()
{

    return 0;
}
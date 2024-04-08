#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<string> graph(N, "");
bool visited[N][N];
int n, m;
string result = "";

bool isSafe(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int main()
{
    cin >> n >> m;
    pair<int, int> posA, posB;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            char ch;
            cin >> ch;
            graph[i][j] = ch;

            if (graph[i][j] == 'A')
                posA = {i, j};
            if (graph[i][j] == 'B')
                posB = {i, j};
            if (graph[i][j] == '#')
                visited[i][j] = 1;
        }
    }

    for (auto i : graph)
        cout << i << endl;

    // dfs(posA.first, posA.second, posB.first, posB.second, result);

    // // cout << visited[posB.first][posB.second] << endl;
    // cout << result << endl;

    return 0;
}
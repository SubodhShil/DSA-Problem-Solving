#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 10;
vector<string> graph;
int level[N][N];
bool visited[N][N];
vector<pii> direc = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
pii parentCoords[N][N];
int n, m;
vector<pii> path;

bool isSafe(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj)
{
    queue<pii> qu;
    qu.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    path.push_back({si, sj});

    while (!qu.empty())
    {
        pii parent = qu.front();
        int i = parent.first;
        int j = parent.second;
        qu.pop();

        for (auto d : direc)
        {
            int ni = i + d.first;
            int nj = j + d.second;
            if (isSafe(ni, nj) && !visited[ni][nj] && graph[ni][nj] != '#')
            {
                qu.push({ni, nj});
                visited[ni][nj] = 1;
                level[ni][nj] = level[i][j] + 1;
                parentCoords[ni][nj] = {i, j};
                path.push_back({ni, nj});
            }
        }
    }
}

int main()
{
    int si, sj, di, dj;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j)
        {
            if (s[j] == 'A')
                si = i, sj = j;
            if (s[j] == 'B')
                di = i, dj = j;
        }

        graph.push_back(s);
    }

    bfs(si, sj);
    if (level[di][dj] != 0)
    {
        cout << "YES\n";
        cout << level[di][dj] << endl;
    }
    else
        cout << "NO\n";

    for (auto i : path)
    {
        cout << i.first << " " << i.second << endl;
        if (i.first == di && i.second == dj)
            break;
    }

    for (int i = 1; i < path.size(); ++i)
    {
        if (path[i - 1].first == path[i].first)
        {
            if (path[i - 1].second + 1 == path[i].second)
                cout << "R";
            else
                cout << "L";
        }
        else
        {
            if (path[i - 1].first + 1 == path[i].first)
                cout << "D";
            else
                cout << "U";
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

template <typename T>
using vec2D = vector<vector<T>>;

bool compFn(vector<int> a, vector<int> b)
{
    return a[][1] > b[][1];
}

void display(vector<vector<int>> v, int jobs)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < jobs; ++j)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int jobs;
    int totalProfit;
    int maxWT = 0;

    cout << "Enter job count: ";
    cin >> jobs;

    vec2D<int> v(3, vector<int>(jobs));

    for (int i = 0; i < jobs; ++i)
    {
        cout << "Enter profit and waiting time for Job " << i + 1 << ": ";
        for (int j = 0; j < 3; ++j)
        {
            if (j == 0)
                v[j][i] = i + 1;
            else
                cin >> v[j][i];

            if (j == 2 && maxWT < v[j][i])
            {
                maxWT = v[j][i];
            }
        }
    }

    vector<int> gantt(maxWT, -1);

    /// display
    display(v, jobs);

    /// sorting descending according to profit
    sort(v.begin(), v.end(), compFn);

    cout << "After sorting: \n";
    display(v, jobs);

    for (int j = 0; j < jobs; ++j)
    {
        if (gantt[v[2][j]] == -1)
            gantt[v[2][j]] = v[0][j];
        else
        {
            for (int j = 0; j < jobs; ++j)
            {
                if (gantt[j] == -1)
                    gantt[j] = v[0][j];
            }
        }

        totalProfit += v[1][j];
    }

    cout << endl
         << "Total profit = " << totalProfit << endl;

    for (auto i : gantt)
        cout << i << " ";

    return 0;
}
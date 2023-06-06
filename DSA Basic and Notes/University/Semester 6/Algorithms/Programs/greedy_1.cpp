#include <bits/stdc++.h>
using namespace std;

template <typename T>
using vec3D = vector<vector<vector<T>>>;

int main()
{
    cout << "Enter job count: ";
    int jobs;
    cin >> jobs;

    vec3D<int> v(3, vector<vector<int>>(jobs));

    for (int i = 0; i < jobs; ++i)
    {
        cout << "Enter data for job " << i + 1 << ": ";
        for (int j = 0; j < 3; ++j)
        {
            int data;
            cin >> data;
            v[j][i].push_back(data);
        }
    }

    /// Displaying the input data
    cout << "Input data:\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < jobs; ++j)
        {
            for (int k = 0; k < v[i][j].size(); ++k)
            {
                cout << v[i][j][k] << " ";
            }
            cout << "\t";
        }
        cout << "\n";
    }

    /// sort profit wise
    /// sort according to the second row
    sort(v.begin(), v.end(), [](const vec3D<int> &a, const vec3D<int> &b)
         { return a[1][0] < b[1][0]; });

    return 0;
}
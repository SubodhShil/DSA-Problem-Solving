#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// 2D array delcaration and intialization

    int array2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << array2D[i][j] << "\t";

        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int xPosition = (n / 2) + 1;
    int size = n;

    /// top
    for (int i = 1; i <= n / 2; ++i)
    {
        for (int j = 1; j <= size; ++j)
        {
            if (i == j)
            {
                cout << "\\";
            }
            else if (j == size)
            {
                cout << "/";
            }
            else
                cout << ' ';
        }
        --size;
        cout << endl;
    }

    /// middle
    for (int i = 1; i <= xPosition; ++i)
    {
        if (i == xPosition)
        {
            cout << "X";
        }
        else
            cout << ' ';
    }
    cout << endl;

    /// bottom
    int forwardSlashPos = xPosition - 1;
    int backslashPos = xPosition + 1;

    for (int i = 1; i <= n / 2; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j == forwardSlashPos)
            {
                cout << "/";
            }

            else if (j == backslashPos)
            {
                cout << "\\";
            }

            else
                cout << ' ';
        }
        --forwardSlashPos;
        ++backslashPos;
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int insertionSortAscending(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 1; i <= size - 1; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] < arr[j - 1] && j > 0)
            {
                swap(arr[j], arr[j - 1]);
            }
            else
                break;
        }
    }

    return 0;
}

int insertionSortDescending(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 1; i <= size - 1; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] > arr[j - 1] && j > 0)
            {
                swap(arr[j], arr[j - 1]);
            }
            else
                break;
        }
    }

    return 0;
}

int main()
{
    // vector<int> v{15, 4, 6, 3, 33, 10, 9, 1, 17};
    vector<int> v{11, 12, 13, 5, 6};
    insertionSortAscending(v);
    // insertionSortDescending(v);

    for (auto i : v)
        cout << i << ' ';

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSortAscending(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[i])
                swap(arr[j], arr[i]);
        }
    }

    return arr;
}

vector<int> bubbleSortDescending(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[j], arr[i]);
        }
    }

    return arr;
}

int main()
{
    vector<int> test{15, 4, 6, 3, 33, 10, 9, 1, 17};
    // bubbleSortAscending(test);
    bubbleSortDescending(test);

    for (auto i : test)
        cout << i << " ";

    return 0;
}
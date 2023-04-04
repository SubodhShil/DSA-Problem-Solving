#include <bits/stdc++.h>
using namespace std;

void test1()
{
    //* Mentioned below the vector allocates 3 places, all filled up with value 1
    vector<int> v(3, 1);
    for (int i : v)
        cout << i << " ";
}

int partitionElement(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];

    //^ count how many elements that are lesser than the pivot
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    //* place the pivot to it's right place
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    //* elements < pivot and elements > pivot
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] < pivot)
            i++;
        else if (arr[j] > pivot)
            j--;
        else
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void QuickSort(vector<int> &arr, int start, int end)
{
    //* base case
    if (start >= end)
    {
        return;
    }

    //* partition phase
    int p = partitionElement(arr, start, end);

    //* sort the left part using quicksort
    QuickSort(arr, start, p - 1);

    //* sort the right part using quicksort
    QuickSort(arr, p + 1, end);
}

int main()
{
    // vector<int> v{2, 4, 1, 7, 5, 8, 3};
    vector<int> v{21, 35, 77, 0, -5, 12, 100};
    int size = v.size();

    QuickSort(v, 0, size - 1);

    for (auto &i : v)
        cout << i << ' ';

    return 0;
}
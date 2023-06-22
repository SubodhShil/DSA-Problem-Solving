#include <bits/stdc++.h>
using namespace std;

/*
^ Algorithm: the algorithm works similar as the bubble sort algorithm. For an iteration this algorithm will place the least element at the leftmost position (for the ascending order sorting) using swapping between adjacent elements.
^ Time complexity: O(n^2)
 */

void selectionSortIterative(vector<int> &unsortedArray)
{
    for (int i = 0; i < unsortedArray.size() - 1; i++)
    {
        int current_min_index = i;
        for (int j = i + 1; j < unsortedArray.size(); j++)
        {
            if (unsortedArray[j] < unsortedArray[current_min_index])
                current_min_index = j;
        }
        swap(unsortedArray[i], unsortedArray[current_min_index]);
    }
}

void selectionSortRecursive(vector<int> &unsortedArray, int size, int i = 0)
{
    //* base case
    if (i == size)
        return;

    int min_index = i;
    for (int j = i + 1; j < size; j++)
    {
        if (unsortedArray[j] < unsortedArray[min_index])
            min_index = j;
    }
    swap(unsortedArray[i], unsortedArray[min_index]);

    selectionSortRecursive(unsortedArray, size, ++i);
}

int main()
{
    vector<int> unsortedArr{-2, 0, 11, -9, 45};
    // selectionSortIterative(unsortedArr);
    selectionSortRecursive(unsortedArr, unsortedArr.size(), 0);

    for (auto &i : unsortedArr)
        cout << i << " ";

    return 0;
}
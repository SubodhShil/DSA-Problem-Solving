#include <bits/stdc++.h>
using namespace std;

class Practice
{
public:
    void bubbleSortIterative(vector<int> &unsortedArr)
    {
        //* Time complexity: O(n ^ 2)
        int size = unsortedArr.size();
        for (int i = 0; i < size - 1; i++)
        {
            //* inner loop => comparing adjacent elements
            for (int j = 0; j < size; j++)
            {
                if (unsortedArr[j] > unsortedArr[j + 1])
                    swap(unsortedArr[i], unsortedArr[j]);
            }
        }
    }

    //* bubble sorting optimized
    void optimizeBubbleSorting(vector<int> unsortedArr)
    {
        //* Time complexity: O(n ^ 2)
        int size = unsortedArr.size();
        bool isSwapped = false;
        for (int i = 0; i < size - 1; i++)
        {
            //* inner loop => comparing adjacent elements
            for (int j = 0; j < size; j++)
            {
                if (unsortedArr[j] > unsortedArr[j + 1])
                {
                    swap(unsortedArr[i], unsortedArr[j]);
                    isSwapped = true;
                }
            }

            if (!isSwapped)
                break;
        }
    }

    void bubbleSortRecursive(vector<int> &unsortedArr, int size)
    {
        //* base case
        //^ an array with a single element doesn't requires any sorting
        if (size == 0 || size == 1)
            return;

        bool isSwapped = false;

        //* processing: place the largest element at the rightmost position
        for (int i = 0; i < size - 1; i++)
        {
            if (unsortedArr[i] > unsortedArr[i + 1])
            {
                swap(unsortedArr[i], unsortedArr[i + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
            return;
        bubbleSortRecursive(unsortedArr, --size);
    }
};

int main()
{
    Practice op;
    vector<int> unsortedArr{-2, 0, 11, -9, 45};
    // op.bubbleSortIterative(unsortedArr);
    op.bubbleSortRecursive(unsortedArr, unsortedArr.size());

    for (auto &i : unsortedArr)
        cout << i << " ";

    return 0;
}
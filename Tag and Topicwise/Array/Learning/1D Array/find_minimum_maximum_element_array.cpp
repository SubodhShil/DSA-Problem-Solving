/// Write a program to compute the maximum and minimum number of an array
// one can use binary search if sorted array is given

#include <bits/stdc++.h>
using namespace std;

class findMaxMinFromArray
{
public:
    void arrayInput(int arr[], int size)
    {
        arr[size] = {0};
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    int getMaxUsingSort(int arr[], int size)
    {
        //* Time complexity: O(n log n)
        //* Space complexity: O(1)

        arrayInput(arr, size);
        sort(arr, arr + size, greater<int>());

        int max_element = arr[0];
        return max_element;
    }

    void getMaxMin(int num[], int size)
    {
        //* Naive solution
        arrayInput(num, size);

        int max_num = INT32_MIN, min_num = INT32_MAX;

        for (int i = 0; i < size; i++)
        {
            if (num[i] > max_num)
                max_num = num[i];

            if (num[i] < min_num)
                min_num = num[i];
        }
        cout << "Max number of the array: " << max_num << endl;
        cout << "Minimum number of the array: " << min_num << endl;
    }

    void getMaxMinUsingSTL(int num[], int size)
    {
        //* Using STL
        arrayInput(num, size);

        cout << "Maximum element: " << *max_element(num, num + size) << endl;
        cout << "Minimum element: " << *min_element(num, num + size) << endl;
    }

    void findMaxMin(int *arr, int size)
    {
        arrayInput(arr, size);

        sort(arr, arr + size);

        cout << "Maximum element: " << arr[size - 1] << endl
             << "Minimum element: " << arr[0] << endl;
    }
};

int main()
{
    int size = 0;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size]{0};

    findMaxMinFromArray op;
    op.findMaxMin(&arr[0], size);

    return 0;
}

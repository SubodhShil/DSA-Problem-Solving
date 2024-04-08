#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr)
{
    //* Selection sort: selects in a particular index and compare it with it's next neighbours for a full length iteration, swap the least and current position element.

    int size = arr.size() - 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min_index = i;
        int min_element = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[i], arr[min_index]);
    }

    cout << "Displaying sorted array (Selection sort)\n";
    for (auto i : arr)
        cout << i << " ";
}

void insertionSort(vector<int> &arr)
{

    int key, j;
    for (int i = 1; i < arr.size(); i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Displaying sorted array (Insertion sort)\n";
    for (auto i : arr)
        cout << i << " ";
}

int main()
{
    cout << "Enter size for your array: ";
    int size;
    cin >> size;

    vector<int> demoArray(size);
    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
        cin >> demoArray[i];

    // selectionSort(demoArray);
    insertionSort(demoArray);

    return 0;
}
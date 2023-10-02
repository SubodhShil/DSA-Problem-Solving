#include <bits/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int> &testArray, int search_key)
{

    int start = 0, end = testArray.size() - 1, mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (testArray[mid] == search_key)
            return mid;
        else if (testArray[mid] > search_key)
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }

    return -1;
}

int binarySearchRecurisive(vector<int> &testArray, int start, int end, int key)
{
    /// auxiliary case or working case
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (testArray[mid] == key)
            return mid;

        if (testArray[mid] > key)
            return binarySearchRecurisive(testArray, start, mid - 1, key);
        else
            return binarySearchRecurisive(testArray, mid + 1, end, key);
    }

    return -1;
}

int main()
{
    cout << "Enter size for your array: ";
    int size;
    int key;
    cin >> size;
    vector<int> demoArray(size);
    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
        cin >> demoArray[i];

    //* sorting the array
    sort(demoArray.begin(), demoArray.end());

    cout << "Enter search key: ";
    cin >> key;
    // (binarySearchIterative(demoArray, key) == -1) ? cout << "No such element found in the array\n" : cout << "Your search key found at : " << binarySearchIterative(demoArray, key) << endl;

    (binarySearchRecurisive(demoArray, 0, size - 1, key) == -1) ? cout << "No such element found in the array\n" : cout << "Your search key found at : " << binarySearchRecurisive(demoArray, 0, size - 1, key) << endl;

    return 0;
}
/**
 * @file hashing_4.cpp
 * @author Subodh Chandra Shil
 * @brief You're given an array contains both positive and negative numbers,
 *        elements are in the range from -MAX to +MAX
 * @task: search if some number is present in the array or not within O(1) time.
 * @version
 * @date 2023-03-24
 */

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

///@dev to handle negative numbers we have to use 2D array
vector<vector<int>> hashTable(MAX + 1, vector<int>(2));

void insertAtHashTable(vector<int> arr)
{
    int arrSize = arr.size();
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] >= 0)
        {
            hashTable[arr[i]][0]++;
        }
        else
        {
            hashTable[abs(arr[i])][1]++;
        }
    }
}

int findHash(vector<int> arr, int x)
{
    return (x >= 0) ? hashTable[x][0] : hashTable[abs(x)][1];
}

int main()
{
    /// test cases
    vector<int> arr = {-1, 9, 2, -5, 3, 1, 9, 2, -5, -5, -199};

    /// @brief insert array elements to the hash table
    insertAtHashTable(arr);

    int q = 0;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << findHash(arr, x) << endl;
    }

    return 0;
}
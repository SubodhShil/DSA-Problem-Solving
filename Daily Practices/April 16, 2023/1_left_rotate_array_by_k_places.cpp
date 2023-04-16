/**
 * @file left_rotate_array_by_k_places.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-16
 * @resource: https://youtu.be/wvcQg43_V8U
 * @problem_source: https://www.codingninjas.com/codestudio/problems/rotate-array_1230543?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

/// for a rotation count exactly of array size, will form the exact array as it was
/// [1, 2, 3, 4, 5, 6, 7] here if k = 7, that means each element will be placed left by
/// 7 places, hence the rotation count is same as array size, the reformation of the array
/// will be alike the array previously
/// so, if we got  k > array_size then, we don't need do array_size of task, just k = k % n

/// Bruteforce 1
/// in-place
void ans1(vector<int> &arr, int k)
{
    vector<int> temp;
    int n = arr.size();

    /// edge case handle
    k = k % n;

    /// store first 'k' into a temporary array
    for (int i = 0; i < k; i++)
        temp.push_back(arr[i]);

    /// shifting
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k, j = 0; i < n; i++)
    {
        /// place remaining elements
        arr[i] = temp[j++];
    }

    /// displaying
    for (auto i : arr)
        cout << i << " ";
}

/// Bruteforce 2
/// extra space -> Space complexity -> O(n)
void ans2(vector<int> &arr, int k)
{
    int n = arr.size();

    k = k % n;

    vector<int> extraArray(n);
    for (int i = 0; i < n; i++)
    {
        int formula = i - k % n;

        if (formula < 0)
        {
            extraArray[n + formula] = arr[i];
        }
        else
        {
            extraArray[formula] = arr[i];
        }
    }

    /// displaying
    for (auto i : extraArray)
        cout << i << " ";
}

/// Bruteforce 3
void ans3(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    int track = k;

    vector<int> extraArray(k);
    for (int i = 0; i < k; i++)
        extraArray[i] = arr[i];

    for (int i = 0, j = 0; i < n; i++)
    {
        if (track < n)
            arr[i] = arr[track++];

        else if (track >= n)
        {
            arr[n - k + j] = extraArray[j];
            j++;
        }
    }

    for (auto i : arr)
        cout << i << " ";
}

void ans4(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    vector<int> extraArray(k);
    for (int i = 0; i < k; i++)
        extraArray[i] = arr[i];

    /// placing element from 'k' elements
    for (int i = k; i < n; i++)
        arr[i - k] = arr[i];

    /// not taking any extra index pointer like 'j'
    for (int i = n - k; i < n; i++)
        arr[i] = extraArray[i - (n - k)];

    /// displaying
    for (auto i : arr)
        cout << i << " ";
}



int main()
{
    // vector<int> v{1, 2, 3, 4, 5, 6, 7};
    vector<int> v{51, 77, 2, -5, 110, 33, 3, 5, 7, 10};
    // ans1(v, 3);
    // ans2(v, 4);
    // ans3(v, 4);
    // ans3(v, 3);

    ans4(v, 4);

    return 0;
}
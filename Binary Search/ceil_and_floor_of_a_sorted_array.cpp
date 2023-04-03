/**
 * @file ceil_and_floor_of_a_sorted_array.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-03
 * @link:   https://www.geeksforgeeks.org/ceiling-in-a-sorted-array/
 */

#include <bits/stdc++.h>
using namespace std;

/// @brief
/// @param v
/// @param target
/// @return vector with 2 elements if not exact match otherwise one element for exact match
vector<int> findCeilandFloor(vector<int> v, int target)
{
    int size = v.size();
    int start = 0, end = size - 1;

    /// vector for keeping floor and ceil values
    vector<int> resultValues;
    int storeCeil = INT32_MAX;
    int storeFloor = INT32_MIN;

    /// while loop for finding ceil value
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (v[mid] == target)
        {
            resultValues.push_back(target);
            resultValues.push_back(target);
            return;
        }

        else if (v[mid] > target)
        {
            /// if exact target is unavailable
            /// it could be possible that v[mid] is the ceil value of target
            /// potential result
            storeCeil = min(storeCeil, v[mid]);
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    resultValues.push_back(storeCeil);

    /// while loop for finding floor value
    /// restore the default values for binary search
    start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (v[mid] < target)
        {
            storeFloor = max(storeFloor, v[mid]);
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    resultValues.push_back(storeFloor);

    return resultValues;
}

int main()
{
    // vector<int> v{1, 2, 8, 10, 10, 12, 19};
    vector<int> v{17, 20, 30, 34, 35, 36, 38, 70};
    findCeilandFloor(v, 37);

    return 0;
}
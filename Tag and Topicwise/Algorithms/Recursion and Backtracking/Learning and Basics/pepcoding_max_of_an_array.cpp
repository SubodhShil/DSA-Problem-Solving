/**
 * @file        pepcoding_max_of_an_array.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-22
 * @resources:  https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/max-of-an-array-official/ojquestion
 */

#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int> &arr, int index)
{
    if (index == arr.size() - 1)
    {
        return arr[index];
    }

    int maxElement = getMax(arr, index + 1);
    if (maxElement > arr[index])
        return maxElement;
    else
        arr[index];
}

int main()
{

    return 0;
}
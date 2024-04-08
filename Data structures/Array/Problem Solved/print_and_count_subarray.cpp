/**
 * @file        print_subarray.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://youtu.be/7kjbZl1Yrn0
 */

#include <bits/stdc++.h>
using namespace std;

class Practice1
{
public:
    void printSubarrays(int arr[], int n)
    {
        // Iterate over all possible starting points.
        for (int i = 0; i < n; i++)
        {
            // Iterate over all possible ending points.
            for (int j = i; j < n; j++)
            {
                // Print the subarray.
                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << " ";
                }

                cout << endl;
            }
        }
    }
};

class Practice2
{
public:
    void count_and_generate_subarrays(vector<int> &arr)
    {
        int size = arr.size();
        int subarrayCnt = 0;

        for (int startingPoint = 0; startingPoint < size; ++startingPoint)
        {
            for (int endingPoint = startingPoint; endingPoint < size; ++endingPoint)
            {
                ++subarrayCnt;

                /// print the subarrays
                /// from starting point to ending point
                for (int i = startingPoint; i <= endingPoint; ++i)
                {
                    cout << arr[i] << " ";
                }

                cout << endl;
            }
            cout << endl;
        }

        cout << "Total number of subarray is: " << subarrayCnt << endl;
    }
};

int main()
{
    vector<int> arr{1, 2, 3, 4};
    Practice2 p2;
    p2.count_and_generate_subarrays(arr);

    return 0;
}
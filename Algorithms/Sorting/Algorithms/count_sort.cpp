/**
 * @file            count_sort.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://youtu.be/9zppWXdJI2M
 */

#include <bits/stdc++.h>
using namespace std;

/// Simple and non-stable count sort
class Solution1
{
public:
    void display(vector<int> arr)
    {
        for (auto i : arr)
            cout << i << " ";

        cout << endl;
    }

    void countSortUnstable(vector<int> &arr)
    {
        /// find the max element
        int maxValue = *max_element(arr.begin(), arr.end());

        /// create a frequency array
        vector<int> frequency(maxValue + 1, 0);

        /// store each element frequency
        for (int i : arr)
        {
            frequency[i]++;
        }

        int k = 0;
        for (int i = 0; i < frequency.size(); ++i)
        {
            int value = i;
            int valueAppeared = frequency[i];

            for (int j = 1; j <= valueAppeared; ++j)
            {
                arr[k++] = value;
            }
        }
    }
};

int main()
{
    // vector<int> v{6, 1, 7, 3, 1, 2, 5, 2, 3, 7, 6, 9};
    vector<int> v{33, 11, 99, 77, 22, 11, 99, 77, 11, 33, 22, 100};
    Solution1 sol1;
    sol1.countSortUnstable(v);
    sol1.display(v);

    return 0;
}
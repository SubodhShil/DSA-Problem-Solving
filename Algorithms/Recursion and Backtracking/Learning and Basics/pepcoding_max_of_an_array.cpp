/**
 * @file        pepcoding_max_of_an_array.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-22
 * @resources:  https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/max-of-an-array-official/ojquestion
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int getMax(vector<int> &arr, int index = 0)
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
};

class Solution2
{
public:
    int getMax(vector<int> &arr, int maxElement = INT32_MIN, int index = 0)
    {
        /// base case
        if (index == arr.size())
            return maxElement;

        /// doing the single work
        int current_max = max(maxElement, arr[index]);

        maxElement = getMax(arr, current_max, index + 1);

        return maxElement;
    }
};

int main()
{
    vector<int> v{5, 20, 15, 7, 33};
    Solution1 sol1;
    Solution2 sol2;
    cout << sol1.getMax(v);
    cout << endl;
    cout << sol2.getMax(v);

    return 0;
}
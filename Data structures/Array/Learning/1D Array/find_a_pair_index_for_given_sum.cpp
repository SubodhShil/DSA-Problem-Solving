/**
 * @file pair_sum.cpp
 * @author Subodh Chandra Shil
 * @problem_source: https://www.techiedelight.com/find-pair-with-given-sum-array/
 *                  https://youtu.be/5L9Jrehvoew
 * @date 2023-04-10
 */

#include <bits/stdc++.h>
using namespace std;

/// return the first two index and element where sum gets similar to the target

pair<int, int> pairSumBruteforce(vector<int> arr, int target)
{
    int size = arr.size();
    pair<int, int> resultPair(-1, -1);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                resultPair.first = i;
                resultPair.second = j;
                break;
            }
        }
    }

    return resultPair;
}

void findPair(vector<int> nums, int target)
{
    int size = nums.size();
    unordered_map<int, int> store;

    for (int i = 0; i < size; i++)
    {
        int a = nums[i];
        int b = target - a;

        if (store.find(b) != store.end())
        {
            cout << "Index: (" << store[b] << ", " << i << ")" << endl;
            cout << "Element: " << nums[store[b]] << ", " << nums[i] << "\n\n";
        }

        /// storing the index
        store[nums[i]] = i;
    }
}

int main()
{
    // vector<int> v{8, 7, 2, 5, 3, 1};
    vector<int> v{1, 5, 7, 1, 5};
    // pair<int, int> ans = pairSumBruteforce(v, 10);
    // cout << ans.first << " " << ans.second << endl;

    findPair(v, 10);

    return 0;
}
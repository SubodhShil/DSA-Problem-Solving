/**
 * @brief
 * @author      Subodh Chandra Shil
 * @source      https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
 *              https://leetcode.com/problems/top-k-frequent-elements/
 * @date        3/25/2023
 * @algorithm   hashing
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> topK(vector<int> &nums, int k)
  {

    /// A map for storing frequencies
    map<int, int> hashmap;

    /// Storing values into the map
    for (auto i : nums)
      hashmap[i]++;

    /// Vector for storing 'k' number of values with highest frequencies
    vector<int> result;

    /// vector of pair for other computations
    vector<pair<int, int>> temp;

    /// value -> first and frequency -> second
    /// vector pair structure: vec[<frequency><value>]
    /// @note here frequency will act as key or first object to do various operation
    ///       since it is not possible to do operation on second object
    for (auto &it : hashmap)
    {
      temp.push_back(make_pair(it.second, it.first));
    }

    /// Sort the 'temp' vector with it's keys and values in descending order
    sort(begin(temp), end(temp), greater<>());

    /// fetch 'k' number of values/elements (first) having most frequenciese
    for (int i = 0; i < k; i++)
    {
      result.push_back(temp[i].second);
    }

    return result;
  }
};

int main()
{
  /// fast I/O
  ios_base::sync_with_stdio(0), cin.tie(0);
}
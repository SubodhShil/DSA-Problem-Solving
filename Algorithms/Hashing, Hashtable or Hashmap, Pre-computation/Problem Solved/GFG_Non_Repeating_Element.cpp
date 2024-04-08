#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        unordered_map<int, int> hashmap;
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            /// save the occurrences into the hashtable
            hashmap[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (hashmap[arr[i]] == 1)
                return arr[i];
        }

        return 0;
    }
};

int main()
{
    Solution sol;
    int arr[]{1, 2, 3, 2, 5, 7, 7, 1};
    cout << sol.firstNonRepeating(arr, 8) << endl;

    return 0;
}
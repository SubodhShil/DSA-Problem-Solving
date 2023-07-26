#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &arr)
    {
        int n = arr.size();
        vector<string> result;
        if (n == 0)
            return result;
        int value = arr[0];

        for (int i = 0; i < n; ++i)
        {
            if (i == n - 1 || arr[i] + 1 != arr[i + 1])
            {
                if (arr[i] == value)
                    result.push_back(to_string(value));
                else
                    result.push_back(to_string(value) + "->" + to_string(arr[i]));

                if (i != n - 1)
                    value = arr[i + 1];
            }
        }

        return result;
    }
};

int main()
{

    return 0;
}

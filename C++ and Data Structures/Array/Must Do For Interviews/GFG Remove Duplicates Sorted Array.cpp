
// inplace algorithm

/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    int removeDuplicates(vector<int> &arr)
    {
        int resultSize = 0;
        int slow = 0, n = arr.size();

        for (int i = 1; i < n; ++i)
        {
            if (arr[i] != arr[slow])
            {
                ++slow;
                arr[slow] = arr[i];
                ++resultSize;
            }
        }
        return resultSize + 1;
    }
};

int32_t main()
{

    return 0;
}
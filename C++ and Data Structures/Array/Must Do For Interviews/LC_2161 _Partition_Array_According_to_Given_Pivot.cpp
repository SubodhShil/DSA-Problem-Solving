/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/partition-array-according-to-given-pivot/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

/* Bruteforce solution: O(N) complexity with O(N) space complexity */

class Solution1 {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result, bigElementIdx;
        int n = nums.size();
        int pivotCnt = 0;

        for(int i = 0; i < n; ++i) {
            if(nums[i] < pivot)
                result.push_back(nums[i]);
            else if(nums[i] == pivot)
                ++pivotCnt;
            else 
                bigElementIdx.push_back(i);
        }

        while(pivotCnt--) {
            result.push_back(pivot);
        }

        for(auto i : bigElementIdx) {
            result.push_back(nums[i]);
        }

        return result;
    }
};

/* Optimized three pointers solution */

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int cntSmaller = 0, cntSimilar = 0, cntBigger = 0;
        vector<int> result(n, 0);

        for(auto x : nums) {
            if(x < pivot) 
                ++cntSmaller;
            else if(x == pivot)
                ++cntSimilar;
            else 
                ++cntBigger;
        }

        cntBigger = cntSimilar + cntSmaller;
        cntSimilar = cntSmaller;
        cntSmaller = 0;

        for(int i = 0; i < n; ++i) {
            if(nums[i] < pivot) 
                result[cntSmaller++] = nums[i];
            else if(nums[i] == pivot)
                result[cntSimilar++] = nums[i];
            else 
                result[cntBigger++] = nums[i];
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;

    return 0;
}
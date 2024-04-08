/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
    * Author: Subodh Chandra Shil
    * Tag: String 
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(string arr[], int N)
    {
        if (N == 1)
            return arr[0];

        /// sort the array of string, that makes the array of string
        /// lexicographically ordering in the array
        sort(arr, arr + N);
        string firstString = arr[0], lastString = arr[N - 1];
        string ans = "";

        for (int i = 0; i < firstString.size(); ++i)
        {
            if (firstString[i] == lastString[i])
                ans += firstString[i];
            else
                break;
        }

        return (ans.size() == 0) ? "-1" : ans;
    }
};

int main()
{

    return 0;
}
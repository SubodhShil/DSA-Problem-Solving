/*
                            ॐ ॐ

    * https://workat.tech/problem-solving/practice/positive-cumulative-sum
    * Author: Subodh Chandra Shil
    * Tag:
    * ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> getPositiveCumulativeSum(vector<int> &arr)
{
    vector<int> result;
    int n = arr.size();

    if (arr[0] > 0)
        result.push_back(arr[0]);

    for (int i = 1; i < n; ++i)
    {
        arr[i] = arr[i - 1] + arr[i];
        if (arr[i] > 0)
            result.push_back(arr[i]);
    }

    return result;
}

int main()
{

    return 0;
}
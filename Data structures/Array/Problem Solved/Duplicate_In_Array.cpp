/**
 * Link : https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

//* naive solution
int findDuplicate(vector<int> &arr)
{
    int size = arr.size();
    int n = size - 1;
    int maxCapacitySum = n * (n + 1) / 2;
    int totalArraySum = accumulate(arr.begin(), arr.end(), 0);

    return abs(totalArraySum - maxCapacitySum);
}

int main()
{
    vector<int> arr = {4, 2, 1, 3, 1};
    cout << findDuplicate(arr);

    return 0;
}
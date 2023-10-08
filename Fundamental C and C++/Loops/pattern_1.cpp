/*
You're given an integer n, you've print such pattern:

Input:
arr = [1, 2, 3, 4, 5, 6]
3

Output:
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6

 */

#include <bits/stdc++.h>
using namespace std;

/// complexity: O(n^2)
void bruteforce()
{
    int n = 0;
    cin >> n;
    vector<int> arr{1, 2, 3, 4, 5, 6};
    for (int i = 1; i <= n; ++i)
    {
        for (auto i : arr)
            cout << i << " ";
        cout << endl;
    }
}

/// complexity: O(n)
void optimized()
{
    int loopCnt = 0;
    cin >> loopCnt;
    // vector<int> arr{1, 2, 3, 4, 5, 6};
    vector<int> arr{11, 3, 5};

    int n = arr.size();
    for (int i = 0; i < arr.size();)
    {
        if (!loopCnt)
            break;
        cout << arr[i] << ' ';
        ++i;
        if (i == n)
        {
            // i = i % n;
            i %= n;
            --loopCnt;
            cout << endl;
        }
    }
}

int main()
{
    // bruteforce();
    optimized();

    return 0;
}
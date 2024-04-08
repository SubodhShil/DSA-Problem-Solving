#include <bits/stdc++.h>
using namespace std;

/*

You're given an integer n, you've print such pattern:
arr = [1, 2, 3, 4, 5, 6]

----------
Testcase 1
----------
Input:
3
Output:
1 2 3 4 5 6
6 5 4 3 2 1
1 2 3 4 5 6

----------
Testcase 2
----------
Input:
5
Output:
1 2 3 4 5 6
6 5 4 3 2 1
1 2 3 4 5 6
6 5 4 3 2 1
1 2 3 4 5 6

*/

void optimized()
{
    int loopCnt = 0;
    cin >> loopCnt;
    // 0 -> left to right and 1 -> right to left
    bool direction = 1;

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int i = 0;
    while (1)
    {
        /// getting out of the loop
        if (!loopCnt)
            break;

        /// print the current element
        cout << arr[i] << ' ';

        /// making loop run ascending or descending
        if (direction && i == n - 1)
        {
            i %= n;
            --loopCnt;
            direction = !direction;
            cout << endl;
            continue;
        }
        if (!direction && i == 0)
        {
            --loopCnt;
            direction = !direction;
            cout << endl;
            continue;
        }

        /// increment or decrement on direction basis
        if (direction)
            ++i;
        else if (!direction)
            --i;
    }
}

int main()
{
    optimized();

    return 0;
}
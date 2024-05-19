#include <bits/stdc++.h>
using namespace std;

// Top down approach
class Solution1
{
public:
    int result(int target, int maxDoubles)
    {
        if (target == 1)
            return 0;

        /// when doubles become zero, we only have to do the first operation
        if (!maxDoubles)
            return target - 1;

        /// when target is divisible by 2, we can do the second operation
        if (target % 2 == 0)
            return 1 + result(target / 2, --maxDoubles);
        /// if odd then do the first operation
        else
            return 1 + result(target - 1, maxDoubles);
    }

    int minMoves(int target, int maxDoubles)
    {
        return result(target, maxDoubles);
    }
};

// bottom up approach
class Solution
{
public:
    int minMoves(int target, int maxDoubles)
    {
        int moves = 0;
        while (maxDoubles and target > 1)
        {
            if (target % 2 == 0)
                ++moves;
            else
                moves += 2;

            target /= 2;
            --maxDoubles;
        }

        return moves + target - 1;
    }
};

int main()
{

    Solution op;
    cout << op.minMoves(19, 2) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int result(int target, int maxDoubles)
    {
        if(target == 1)
            return 0;

        if(!maxDoubles)
            return --target + 1;
    }

    int minMoves(int target, int maxDoubles)
    {
        return result(target, maxDoubles);
    }
};

int main()
{

    Solution op;
    cout << op.minMoves(19, 2) << endl;

    return 0;
}
/// say digit in string on integer user input

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countDistinctWays(int nStairs)
    {
        if (nStairs < 0)
            return 0;
        if (nStairs == 0)
            return 1;

        int ans = countDistinctWays(nStairs - 2) + countDistinctWays(nStairs - 1);

        return ans;
    }

    void sayDigit(int n, map<int, string> s)
    {
        //* base case
        if (n == 0)
            return;

        //* processing
        int digit = n % 10;
        n /= 10;

        //* recursive call
        sayDigit(n, s);

        cout << s[digit] << "\t";
    }
};

int main()
{
    map<int, string> mp = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"}};

    Solution op;
    int number = 776;
    op.sayDigit(number, mp);

    return 0;
}
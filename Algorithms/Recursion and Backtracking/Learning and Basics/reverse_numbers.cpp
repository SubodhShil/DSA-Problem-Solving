#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int reverseNumber(int n, int rev = 0)
    {
        if (n == 0)
            return rev;

        rev = rev * 10 + n % 10;
        return reverseNumber(n / 10, rev);
    }
};

int main()
{
    Solution1 sol1;
    cout << sol1.reverseNumber(1752) << endl;

    return 0;
}
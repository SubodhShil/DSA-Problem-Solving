#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int countZero(int n, int cnt = 0)
    {
        if (n != 0)
        {
            if (n % 10 == 0)
                ++cnt;

            if (n % 10 == n)
                return cnt;

            return countZero(n / 10, cnt);
        }

        return 1;
    }
};

class Solution2
{
public:
    int countZero(int n)
    {
        return helper(n);
    }

    int helper(int n, int cnt = 0)
    {
        if (n == 0)
            return cnt;

        if (n % 10 == 0)
            return helper(n / 10, ++cnt);

        return helper(n / 10, cnt);
    }
};

int main()
{
    Solution1 sol1;
    Solution2 sol2;
    cout << sol1.countZero(1000004) << endl;
    cout << sol2.countZero(1000004) << endl;

    return 0;
}
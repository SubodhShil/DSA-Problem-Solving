#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    cout << countZero(1000004) << endl;

    return 0;
}
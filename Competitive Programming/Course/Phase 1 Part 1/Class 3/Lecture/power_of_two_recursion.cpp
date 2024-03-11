#include <bits/stdc++.h>
using namespace std;

int power_of_two(int n)
{
    /// 2^0 = 1
    if(n == 0) 
        return 1;

    return power_of_two(n - 1) + power_of_two(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << power_of_two(5);

    return 0;
}
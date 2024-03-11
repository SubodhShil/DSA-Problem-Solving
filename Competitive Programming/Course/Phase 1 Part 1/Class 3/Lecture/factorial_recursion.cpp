#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;
    return factorial(n - 1) * n;
}

int main()
{
    cout << factorial(5) << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void love_recursion(int n)
{
    if (n == 0)
        return;
    love_recursion(n - 1);
    cout << "I love Recursion\n";
}

int main()
{
    int n;
    cin >> n;
    love_recursion(n);

    return 0;
}
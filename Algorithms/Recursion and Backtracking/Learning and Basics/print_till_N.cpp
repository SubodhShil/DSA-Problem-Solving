#include <bits/stdc++.h>
using namespace std;

void printNumbers(int n)
{
    if (n >= 1)
    {
        printNumbers(n - 1);
        cout << n << " ";
    }
}

int main()
{
    int num = 0;
    cout << "Enter number = ";
    cin >> num;
    printNumbers(num);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/// this function demonstrates
/// how return type and parameter works together
/// in a function

int sumOfNumbers(int = 0, int = 0);

int product(int x = 1, int y = 1)
{
    return x * y;
}

int main()
{
    sumOfNumbers(33);
    return 0;
}

int sumOfNumbers(int x, int y)
{
    cout << "Sum is: " << x + y << endl;
    cout << "Product is: " << product() << endl;
}
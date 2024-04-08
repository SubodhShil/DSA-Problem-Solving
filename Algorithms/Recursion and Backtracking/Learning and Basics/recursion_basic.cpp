/// Simple recursion
/// Recursive call should be stopped after printing
/// "Hello world" for 5 times

#include <bits/stdc++.h>
using namespace std;

/// global variable to track the number of time
/// it has printed "Hello world"
int cnt = 1;

void printHelloWorld()
{
    /// base case
    if (cnt > 5)
        return;

    cout << "Hello world, count = " << cnt++ << "\n";

    printHelloWorld();
}

int main()
{
    printHelloWorld();

    return 0;
}
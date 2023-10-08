#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x = 201;
    float *p = &x;

    /// moving pointer location 3 bytes ahead of variable x
    p += 3;

    /// shows garbage value
    cout << p << endl;

    return 0;
}
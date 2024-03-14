#include <bits/stdc++.h>
using namespace std;

#define number_cnt(n) floor(log10(n)) + 1

int main()
{
    int n, targetBase;
    cin >> n >> targetBase;

    int a = log2(n);                    // base 2
    int b = log10(n);                   // base 10
    int c = log(n);                     // base 'e' or natural base
    int d = log2(n) / log2(targetBase); // base 'target'

    cout << number_cnt(1243244) << endl;

    return 0;
}
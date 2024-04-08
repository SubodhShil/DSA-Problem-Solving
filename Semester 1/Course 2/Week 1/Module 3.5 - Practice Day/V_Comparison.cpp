#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string sign;

    cin >> a >> sign >> b;

    ((sign == ">" && a > b) || (sign == "=" && a == b) || sign == "<" && a < b) ? cout << "Right\n" : cout << "Wrong\n";
}

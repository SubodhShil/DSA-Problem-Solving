#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i > n)
        return;

    print(i + 1, n);
    cout << i << ' ';
}

void recursive_n_to_1_Way01()
{
    int i, n;
    cin >> i >> n;
    print(i, n);
}

void print2(int i, int n)
{
    if (i > n)
        return;
    cout << i << ' ';

    print2(i - 1, n);
}

void recursive_n_to_1_Way02()
{
    int i, n;
    cin >> i >> n;
    print(i, n);
}

int main()
{
    // recursive_n_to_1_Way01();
    recursive_n_to_1_Way02();

    return 0;
}
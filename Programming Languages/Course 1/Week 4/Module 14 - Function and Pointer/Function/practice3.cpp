#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'a';
    char *x = &ch;
    cout << (void *)x << endl;

    float f = 3.41;
    float *ptr = &f;
    cout << ptr << endl;

    int i = 5;
    int *ptr2 = &i;
    cout << ptr2 << endl;

    bool b = true;
    bool *ptr3 = &b;
    cout << ptr3 << endl;

    return 0;
}
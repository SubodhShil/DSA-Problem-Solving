/*
                            ॐ ॐ
    * https://atcoder.jp/contests/arc117/tasks/arc117_a
    * Author: Subodh Chandra Shil
    * Tag: Math
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int a, b;
    cin >> a >> b;
    /// find the difference such that in which side difference favours
    /// if difference is 0 then we just print A positive numbers and B negative numbers
    /// if difference favours toward +ve value than we have to add negative differnece to make total equal 0 and vice versa if difference is -ve

    int difference = (a * (a + 1) / 2) - (b * (b + 1) / 2);

    for (int i = 1; i <= a; ++i)
    {
        if (i == a && difference < 0)
            cout << i + -1 * difference << " ";
        else
            cout << i << ' ';
    }

    for (int i = 1; i <= b; ++i)
    {
        if (i == b && difference > 0)
            cout << (-1 * i) - difference << " ";
        else
            cout << -1 * i << ' ';
    }

    return 0;
}
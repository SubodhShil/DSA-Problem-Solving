#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ll;
    while (1)
    {
        int number;
        cin >> number;

        if (number == -1)
        {
            break;
        }

        ll.push_back(number);
    }

    ll.sort();
    ll.unique();

    for (auto i : ll)
    {
        cout << i << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList{1, 2, 3, 4};

    /// clear method will remove all elements from the list
    // myList.clear();

    /// resize method will increase or decrease element size
    // myList.resize(10);

    /// size method will return the current element count in the list
    cout << myList.size() << endl;

    for (auto i : myList)
        cout << i << " ";

    return 0;
}
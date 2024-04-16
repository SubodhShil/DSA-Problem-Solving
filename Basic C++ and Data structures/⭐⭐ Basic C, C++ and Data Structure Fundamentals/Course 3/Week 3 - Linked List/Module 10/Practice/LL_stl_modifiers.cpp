#include <bits/stdc++.h>
using namespace std;

void methods()
{
    list<int> l{111, 22, 22, 30, 40, 50};

    /// deletes the node currently pointing to head
    l.pop_front();

    l.push_front(10);

    /// insert at position
    /// insert() method T.C => O(1)
    /// next() method T.C => O(N)
    l.insert(next(l.begin(), 2), 500);
    // l.erase(next(l.begin(), 3), l.end());

    l.insert(l.end(), {-1, -2, -3});

    replace(l.begin(), l.end(), 22, 23);
    // l.remove(111);
    // cout << l.back() << endl;

    // l.reverse();
    // l.unique();
    cout << l.empty() << endl;

    for (auto i : l)
        cout << i << ' ';
}

void find_method()
{
    list<int> myList = {1, 2, 3, 4, 5};
    auto it = find(myList.begin(), myList.end(), 6);

    if (it == myList.end())
    {
        cout << "Not found\n";
    }
    else
    {
        cout << "Found\n";
    }
}

int main()
{
    find_method();

    return 0;
}
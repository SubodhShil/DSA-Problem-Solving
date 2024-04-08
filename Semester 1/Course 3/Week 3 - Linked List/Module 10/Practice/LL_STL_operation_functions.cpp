#include <bits/stdc++.h>
using namespace std;

void remove_method()
{
    list<int> myList = {10, 22, 33, 77, 96, 10, 45};
    myList.remove(10);

    for (auto i : myList)
        cout << i << " ";
}

void sorting_method()
{
    list<int> myList = {10, 22, 33, 77, 96, 10, 45};
    /// sort ascending
    myList.sort();

    /// sort descending
    myList.sort(greater<int>());
    for (auto i : myList)
        cout << i << " ";
}

void unique_method()
{
    /// unique method deletes duplicate values from a list
    /// it works only when the list is sorted, otherwise you've to sort the list first
    list<int> myList = {10, 22, 33, 77, 96, 10, 45};
    myList.sort();
    myList.unique();

    for (auto i : myList)
        cout << i << " ";
}

void reverse_method()
{
    list<int> ll{-1, 5, 9, 0, 22};
    ll.reverse();

    for (auto i : ll)
        cout << i << " ";
}

void element_access()
{
    list<int> ll{102, 303, 3030};
    // cout << ll.front() << endl;
    // cout << ll.back() << endl;

    /// element access using dereferenced next() method
    int i = 0;
    while (i < ll.size())
    {
        cout << *next(ll.begin(), i) << " ";
        ++i;
    }
}

int main()
{
    // remove_method();
    // sorting_method();
    // unique_method();
    // reverse_method();
    element_access();

    return 0;
}
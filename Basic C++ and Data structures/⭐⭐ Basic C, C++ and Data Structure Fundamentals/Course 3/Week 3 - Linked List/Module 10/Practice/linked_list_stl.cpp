#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList(10, -13);
    // cout << myList.size() << endl;
    // cout << myList.front() << endl;

    for (auto it = myList.begin(); it != myList.end(); ++it)
        cout << *it << " ";

    cout << endl;
    // int arr[5]{-1, -2, -3, -4, -5};
    vector<int> arr2{10, 20, 30, 40, 50};
    list<int> list1{1, 2, 3, 4, 5};

    // list<int> list2(list1);
    // list<int> list2(arr, arr + 5);
    list<int> list2(begin(arr2), end(arr2));

    /// iterate using range based for loop
    for (auto it : list2)
        cout << it << ' ';

    return 0;
}
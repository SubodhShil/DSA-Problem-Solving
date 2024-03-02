#include <bits/stdc++.h>
using namespace std;

void insertHeap(vector<int> &v, int x)
{
    v.push_back(x);

    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}

void heapDeletion(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int currentIdx = 0;

    while (1)
    {
        int leftIdx = currentIdx * 2 + 1;
        int rightIdx = currentIdx * 2 + 2;
        int n = v.size() - 1;

        /// check both left and right child index are valid
        if (leftIdx <= n && rightIdx <= n)
        {
            /// if both elements are available
            if()
        }

        /// check if left is valid
        else if (leftIdx < n)
        {
            ///
        }

        if (currentIdx * 2 + 2 < n)
        {
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        insertHeap(v, x);
    }

    for (auto i : v)
        cout << i << " ";

    return 0;
}